#include <cs50.h>
#include <stdio.h>
#include <string.h> //<string.h> and special syntax needed to compare strings

//Sometimes you want functions to return three kinds of answers,
//but == can only give you two answers (true or flase; yes or no)

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        //strings cannot be compared like integers
        if (strcmp(strings[i],s) == 0)
        //checking for strcmp returning 0.
        //strcmp compares two strings for equality, but also for ASCII-betical order
        //If strcmp, when given two strings as input, returns 0, the two strings are the same
        //strcmp returns a positive number if one comes before the other and a negative number if the oposite is true.
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

int main(void)
{
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }

    char *t = malloc(strlen(s) + 1);

    if (t == NULL)
    {
        return 1;
    }

    //to copy one content of one string to another string
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    //also to copy the content of one string into another string
    strcpy(t, s); //takes the destination of its first argument, the destination as its second argument
    // ^ does the same as the whole for loop

}
