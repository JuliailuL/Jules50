#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //a string is an arary of chars
    string s = "HI!";
    // H is at s[0], I at s[1], ! at s[2] and on s[3] is \0
    // s itself, technically is a pointer; it is the adress of the string
    // the string is somewhere in memory...
    // ...the value of s is a pointer to s[0] / to the beginning of the string.
    // in add1 n was prefixed with &, in the above case the "" take care of that

    printf("%s\n", s); // prints the string itself
    printf("%p\n", s); // treats s as the pointer it actually is
    printf("%p\n", &s[0]); // s[0] is first character in the string s, ampersand(&) is adress-of
    printf("%p\n", &s[1]);

    // string s   is actually    char *s (no need for <cs50.h> when using char*)
    // a char by definition is a single character, a char* is a different data type,
    // the * means that s is not a char but is the adress of a char and by convention its the first char of a string
    // the double " quotes are in place for the & -> not: char *s = &HI! -> the adress of the first char is the variable in s

}
