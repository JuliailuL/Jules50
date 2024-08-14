#include <stdio.h>

int main(void)
{
    int n;
    printf("n: ");
    scanf("%i", &n); //here you need an "&" because n is an integer
    printf("n: %i\n", n);

    char s[]; //declare s to be an array of characters //char *s wont work
    printf("s: ");
    scanf("%s", s); //here you don't need an "&" bacause s is an address (string is just the adress of it's 1st byte)
    printf("s: %s\n", s);

    //scanf is dangerous to use because it lacks the error handling of the cs50 library
}
// 7: call scanf and the pass in a format code, like %i, effectively telling scanf that what I want...
//    ... it to scan, is, in fact a single integer, &n tells scanf where you want to put this int
//    -> I pass scanf one argument, which is a format code and a second argument, which is the...
//       ...address of an integer into which to put the users value
