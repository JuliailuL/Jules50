#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') //If lowercase
        {
            printf("%c", s[i] - 32); //ASCII-chart!
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("*");


    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i])); //comes from ctype.h
    }
    printf("\n");
}
