// CHECK IF A FILE IS A PDF
//to run this you actually need a file in VSCode to read

#include <cs50.h>
#include <stdio.h>
#include <stdint.h> //gives uint8_t

int main(int argc, string argv[])
{
    string filename = argv[1];
    FILE *f = fopen(filename, "r");
    //fopen takes a file name as its first input, and opens that file just using the mode r(eading)
    //FILE *f is a pointer to a file called f and is of type File */ file pointer

    uint8_t buffer[4];
    // a pdf is full of one byte chunks of memory (we want to read the first four):
    // either read it one at a time or use an array -> often buffers are arrays
    // make an array of integers to look at the first four bytes AS integers in order...
    //...to check if they are equal to some value
    // uint8_t is not the generic interger type which is 4 bytes long, it is an integer...
    //...that is 8 bits long, that is unsigned (only positive)

    fread(buffer, 1, 4, f);
    //fread(read into that buffer, how big are the chunks, how many chunks to read at once, where to read from)
    //read from the file pointer, not the name of the file
    //with this line we successfully have some data inside our buffer

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", buffer[i]);
    }
    fclose(f);
}


    // TODO: Copy header from input file to output file
    uint8_t buffer_header[44];
    fread(buffer_header, 1, 44, input);
    fwrite(input, 1, 44, output);
    // --> read the header from the input file and write the header to the output file
   //use fread to read 44 bytes from your file and then use fwrite to reite 44 bytes to the output file
    // uint8_t when you want to read in a header that has 44 bytes of data you might use an array of 44 of these...
    //.. unsigned integers of 8-bit-size --> to store your header

 // after the header recall comes each of the 2 byte samples which need to be multiplied


    // TODO: Read samples from input file and write updated data to output file
    // Repeat for each SAMPLE from the inpul file:
    // read the sample from the input file, then multiply the sample value by the folume factor
    // after you've done that multiplication you write that new sample to the output file
    // ...so that the updated sample with the modified volume ends up being written to the output file
    // ...for each of the samples of audio in that entire file
    int16_t buffer_sample;

    // uint16_t for representing your samples
    //fread reads a certain number of bytes from some file into memory inside your computer
    //fwrite can write data from your computer's memory to a particular file
