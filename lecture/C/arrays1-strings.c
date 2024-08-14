#include <cs50.h>
#include <stdio.h>

//string is an array of chars
//sentinal value at the end of every string in a computers memory is a byte of all zero bits 00000000, it prints/ is written \0 and called NUL

int main(void)
{
    string s = "HI!";
    printf("%s\n", s);
    printf("%c%c%c\n", s[0], s[1], s[2]);
    printf("%i %i %i\n", s[0], s[1], s[2]);
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);

    string t = "HI!";
    string u = "BYE!";

    printf("%s\n", t);
    printf("%s\n", u);
    printf("%s\n%s\n", t, u);


    //create an array of 2 strings, a string is an array of characters
    string words[2];
    words[0] = "YES";
    words[1] = "NO";

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
    //it's not different in terms of output, but here is just one variable
    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
}

