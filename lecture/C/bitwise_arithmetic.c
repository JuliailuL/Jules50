
    //this is syntax for checking for the beginning of a jpeg file
    buffer[0] == 0xff
    buffer[1] == 0xd8
    buffer[2] == 0xff
    (buffer[3] & 0xf0) == 0xe0
    // instead of typing 0xf0, 0xf1....0xfe, use the above sytax (bitwise arithmetic), it means:
    // you take the bitwise and of buffer 3 and Oxf0
    // -> just look at the first four bits of this 8-bit byte and set the ramaining four bits to 0
    // -> so all become 0xe0 because we've cleared out those last four bits
    // -> Now, we can just compare the result to 0xe0 to determine wether or not this byte is the fourth byte inside of a JPEG header


sprintf(filename, "%03i.jpeg", 2);
// sprintf(filename, "%03i.jpg", 2) prints not to the terminal but to a string.
// The first parameter is the string you want to write to.
// The second one is the format string: %03i means print an integer with three digits to represent it.
// The final parameter is the number that you want to substitute.
// -> In this case the result would be, that the file name string would now contain 002.jpeg instead.


    // Make sure that filename has enough characters to fully represent this entire file name:
    FILE *img = fopen(filename, "w");


    fwrite(buffer, 1, 512, filename); //-> filename is the FILE* you want to write data to
    //fwrite returns the number of items of size size that were read
    // if you're trying to read 512 elements, then fread is going to return to me 512.
    // Once you reach the end of the file it might be the case that you don't have additional 512 bytes to read
    // -> in this case fread is going to return to me some number that is less then 512.
    // -> what condition do you write to determine whether fread has gotten to the end of the file or not.


//Your program, if it uses malloc, must not leak any memory.

// After you've reached the end of the memory card, close any remaining files
// and you should see that you#ve now generated a number of JPEG files
// each of which contains image data that you can then open up and view visually

}

