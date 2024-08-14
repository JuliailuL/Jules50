#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> //gives malloc -> memory allocate;
#include <string.h>

int main (void)
{
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    } //get_string can return NULL. E.g. if you type a crazy long string and there is not enough memory to store it.
    //the documentation sais that if get_string resturns NULL then you too  should not trust it exit the program immediatly.

    char *t = malloc(strlen(s) + 1); // -> add one for the null character
    // this would only copy the adress:     char *t = s;
    // malloc takes a single argument which is the number of bytes you would like the operating system to allocate for you:
    // asks the operating system to find you that number of bytes in the computers memory, which you then use for your own purposes
    if (t == NULL)
    {
        return 1;
    } // If maloc returns NULL there is not enough memory available
    strcpy(t, s) //takes the destination of its first argument, the destination as its second argument

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);
    // In C the coder has to manage the memory herself so when you've called malloc thereafter you...
    //... free that same memory...not right away, but when you're done with it.
    // t is what's been malloced at the beginning so at the bottom of the program thats what you free
    // The memory for s doesn't need to be freed...get_string does that for you
    return 0;
}
