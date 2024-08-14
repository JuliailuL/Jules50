#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_pyramid(int height);

int main(void)
{
    int n = get_height();
    print_pyramid(n);
}

int get_height(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void print_pyramid(int height)
{
    for (int o = 0; o < height; o++)
    {
        for (int p = height - 1; p > o; p--)
        {
            printf(" ");
        }
        for (int q = -1; q < o; q++)
        {
            printf("#");
        }
        printf("\n");
    }
}
