#include <stdio.h>
#include <stdint.h> //gives uint8_t

typedef uint8_t BYTE; //give an unsigned (= no negative numbers) eight bit value niknamed BYTE

int main(int argc, char *argv[]) //-> this is the canonical way to declare main when you want to get command line arguments
{
// create one file in memory called src (source) and set that equal to whatever argv[1] is in read mode, to be super
// specific use read binary mode "rb". Not copying text files, but binary data like zeros and ones, like images.
    FILE *src = fopen(argv[1], "rb");

// create second variable called dst (destination) and open whatever is in argv[2] (second filename at the command line)
// and write to it in binary
    FILE *dst = fopen(argv[2], "wb");


//Copying one byte at a time

//byte is not a thing in C...here its a synonym created for the sake of discussion
    BYTE b;

//while there are bytes to read from the file:
// fread is a function to read one or more bytes for you. Like swap or scanf you have to tell it where to load those bytes
// in memory. --- Here you put them in the byte called b. You can't just say b, because that's passed by value. It needs to
// pass by reference: the adress of b is where I want you to put one byte at a time ---- then how big is it (could say 1,
// but sizeof is proper) --- then 1 for one at a time --- and last where do you want to read those files from
// the documentation fread just tells you how many bytes were successfully read. Logically it's either one was read or zero
// because it is asked to read one at a time...so it is either succeeds or fails...you want to do this for as long as it succeeds
// because at the end of the file there's no more bytes to read and the fread will return 0
    while (fread(&b, sizeof(b), 1, src) !=0)
    {
        fwrite(&b, sizeof(b), 1, dst); // ->1.
    }
    fclose(dst);
    fclose(src);
}
//   1. &b: first tell fwrite where to find the byte (go there and get the byte, that was copied)
//      sizeof(b): which will be the size of 1, but the wording is general
//      1: one byte at a time, please
//      dst: and write it to the destination file
