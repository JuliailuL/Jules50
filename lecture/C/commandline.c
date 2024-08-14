#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) //argc is the number of command line arguments
{
    printf("hello, %s %s\n", argv[1], argv[2]); // 'make commandline' then './commandline Julia'
    //the name of your program is always accessible in argv[0] (=in argv at location 0)

    //if you don't want bogus output and expect only two command line arguments:
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }

    //if you don't want bogus output but don't know how many command line arguments to expect:
    for (int i = 0; i < argc; i++) //loop that iterates 'argc number of times'
    {
        printf("%s\n", argv[i]); //argv[i] is the ith word in that array rom left to right
    }
}
