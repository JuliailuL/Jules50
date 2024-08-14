#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int counting_letters(string text);
int counting_words(string text);
int counting_sentences(string text);

int main(void)
{
    string t = get_string("Text, please: ");

    int l = counting_letters(t);
    int w = counting_words(t);
    int s = counting_sentences(t);

    int Index = round((0.0588 * (((float) l / w) * 100)) - (0.296 * (((float) s / w) * 100)) - 15.8);

    if (Index <= 0)
    {
        printf("Before Grade 1\n");
    }
    else if (Index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", Index);
    }
}

int counting_letters(string text)
{
    int letters = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int counting_words(string text)
{
    int words = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i]) == ' ')
        {
            words++;
        }
    }
    return words;
}

int counting_sentences(string text)
{
    int sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}
