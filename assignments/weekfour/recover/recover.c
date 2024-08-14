#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Accept a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // Open the memory card
    FILE *card = fopen(argv[1], "r");
    if (card == NULL)
    {
        printf("Cannot open %s.\n", argv[1]);
        return 2;
    }

    // Create a buffer for a block of data
    uint8_t buffer[512];

    //
    int filecount = 0;
    char *filename = malloc(8 * sizeof(char));
    FILE *out = NULL;

    // While there's still data left to read from the memory card
    while (fread(buffer, 1, 512, card) == 512)
    {
        // Create JPEGs from the data
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if (filecount != 0)
            {
                fclose(out);
            }
            sprintf(filename, "%03i.jpg", filecount);
            out = fopen(filename, "w");
            fwrite(buffer, 1, 512, out);
            filecount++;
        }
        else if (filecount != 0)
        {
            fwrite(buffer, 1, 512, out);
        }
    }
    free(filename);
    fclose(out);
    fclose(card);
    return 0;
}
