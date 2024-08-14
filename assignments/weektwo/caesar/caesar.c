#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int i);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("no\n");
        return 1;
    }

    bool one = only_digits(argv[1]);

    if (one != true)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int a = atoi(argv[1]);

    string plain = get_string("Plaintext: ");

    printf("Ciphertext: ");
    for (int i = 0, n = strlen(plain); i < n; i++)
    {
        printf("%c", rotate(plain[i], a));
    }
    printf("\n");
}

bool only_digits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
        if (!isdigit(s[i]))
        {
            return false;
        }
    return true;
}

char rotate(char c, int i)
{
    if (isalpha(c))
    {
        if (isupper(c))
        {
            c = (((c - 'A' + i) % 26) + 65);
        }
        else if (islower(c))
        {
            c = (((c - 'a' + i) % 26) + 97);
        }
    }
    return c;
}
