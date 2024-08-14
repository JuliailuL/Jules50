#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float c = (image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0;
            int d = round(c);
            image[i][j].rgbtRed = d;
            image[i][j].rgbtGreen = d;
            image[i][j].rgbtBlue = d;
        }
    }
    return;
}

// Convert image to sepia
void change(float c, uint8_t *image);

void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float r = (.393 * image[i][j].rgbtRed) + (.769 * image[i][j].rgbtGreen) +
                      (.189 * image[i][j].rgbtBlue);
            uint8_t rr = image[i][j].rgbtRed;
            change(r, &rr);

            float g = (.349 * image[i][j].rgbtRed) + (.686 * image[i][j].rgbtGreen) +
                      (.168 * image[i][j].rgbtBlue);
            uint8_t gg = image[i][j].rgbtGreen;
            change(g, &gg);

            float b = (.272 * image[i][j].rgbtRed) + (.534 * image[i][j].rgbtGreen) +
                      (.131 * image[i][j].rgbtBlue);
            uint8_t bb = image[i][j].rgbtBlue;
            change(b, &bb);

            image[i][j].rgbtRed = rr;
            image[i][j].rgbtGreen = gg;
            image[i][j].rgbtBlue = bb;
        }
    }
    return;
}

void change(float c, uint8_t *image)
{
    int d = round(c);
    if (d < 255)
    {
        *image = d;
    }
    else
    {
        *image = 255;
    }
}

// Reflect image horizontally
void swap(RGBTRIPLE *pixelone, RGBTRIPLE *pixeltwo);

void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0, h = height; i < h; i++)
    {
        for (int j = 0, w = width / 2; j < w; j++)
        {
            swap(&image[i][j], &image[i][width - j - 1]);
        }
    }
    return;
}

void swap(RGBTRIPLE *pixelone, RGBTRIPLE *pixeltwo)
{
    RGBTRIPLE temp = *pixelone;
    *pixelone = *pixeltwo;
    *pixeltwo = temp;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float count = 0;
            int sumred = 0;
            int sumgreen = 0;
            int sumblue = 0;

            for (int h = i - 1; h <= i + 1; h++)
            {
                for (int k = j - 1; k <= j + 1; k++)
                {
                    if (h >= 0 && k >= 0 && h < height && k < width)
                    {
                        sumred += copy[h][k].rgbtRed;
                        sumgreen += copy[h][k].rgbtGreen;
                        sumblue += copy[h][k].rgbtBlue;
                        count += 1;
                    }
                }
            }
            image[i][j].rgbtRed = round(sumred / count);
            image[i][j].rgbtGreen = round(sumgreen / count);
            image[i][j].rgbtBlue = round(sumblue / count);
        }
    }
    return;
}
