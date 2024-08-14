#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool alphabetic(string s);
bool repetition(string s);

int main(int argc, string argv[])
{
    if (argc != 2 || strlen(argv[1]) != 26)
    {
        printf("Usage: ./substitution key (of 26 characters)\n");
        return 1;
    }

    bool one = alphabetic(argv[1]);
    bool two = repetition(argv[1]);
    if (one == false || two == false)
    {
        printf("key must consist of only alphabetic characters\n while a character can only appear once\n");
        return 1;
    }

    string plain = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0, n = strlen(plain); i < n; i++)
    {
        if (isalpha(plain[i]))
        {
            if (isupper(plain[i]))
            {
                int c = plain[i] - 'A';
                char d = argv[1][c];
                if (islower(d))
                {
                    d = toupper(d);
                }
                printf("%c", d);
            }
            else if (islower(plain[i]))
            {
                int c = plain[i] - 'a';
                char d = argv[1][c];
                if (isupper(d))
                {
                    d = tolower(d);
                }
                printf("%c", d);
            }
        }
        else
        {
            printf("%c", plain[i]);
        }
    }
    printf("\n");
}

bool alphabetic(string s)
{
    for (int i = 0; i < 26; i++)
        if (!isalpha(s[i]))
        {
            return false;
        }
    return true;
}

bool repetition(string s)
{
    for (int i = 0; i < 26; i++)
    {
        for (int j = i + 1; j < 26; j++)
            if (s[i] == s[j])
            {
                return false;
            }
    }
    return true;
}
