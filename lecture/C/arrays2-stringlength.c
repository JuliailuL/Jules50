#include <cs50.h>
#include <stdio.h>
// https://manual.cs50.io/#string.h
#include <string.h>

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("%i\n", length);

    //using string library:
    int length2 = strlen(name);
    printf("%i\n", length2);

}

 int string_length(string s)
 //iterating (=walking over a variable from left to right in order to figure out what the length of a given string is)
{
    int n = 0;
    while (s[n] != '\0') //while the s variable at location n does not equal \0. Is the character at that location equal to NUL?
    {
        n++; //while that is true add one to n
    }
    return n;
}

