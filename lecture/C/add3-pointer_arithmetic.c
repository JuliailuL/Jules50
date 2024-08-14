//pointer arithmetic is doing math on adresses

#include <stdio.h>

int main(void)
{
    char *s = "HI!"; // the double quaotes are instead of &. The C compiler clang knows when it sees doubele quotes...
                    //... around a sequence of characters to put the address of that first char in the variable.
    printf("%c", s[0]);
    printf("%c", s[1]);
    printf("%c\n", s[2]);

    printf("%c", *s);
    printf("%c", *(s + 1));
    printf("%c\n", *(s + 2));
    //the first and the second column are the same --> syntactic sugar

    
}
