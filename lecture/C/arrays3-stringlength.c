#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
     for (int i = 0; i < strlen(s); i++)
    // i < strlen(s) -> i is less than the length of s
    // for.... i++) -> iterate left to right over a string of that length
    // strlen is a function call...every loop you call this function anew (meaning you run strlen, which also has a loop in it; over and over) whereas the answer to the function doesn't change.
    {
        printf("%c", s[i]);
    }

    for (int i = 0, n = strlen(s); i < n; i++)
    //declaring i as an int, and by way of the comma declaring n as an int; they have to be the same type for this trick to work
    {
        printf("%c", s[i]);
    }
    printf("\n");



    int myNumbers[] = {10, 25, 50, 75, 100};

    printf("%lu", sizeof(myNumbers)); // Prints 20

    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("%d", length);  // Prints 5

    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} }; //Multidimensional array
}
