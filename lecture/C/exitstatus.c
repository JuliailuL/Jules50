#include <cs50.h>
#include <stdio.h>

//exit status 0 means everything is ok
//if you really want to see the 0, you type echo $? -> it shows: what the most recently run program secretly exited with

int main(int argc, string argv[])
//the int above means that even your programs can return values even if you don't use command line arguments
{
    //only execute printf if there's a command line argument
    //otherwise: no default, instead abort early and exit the program with no output
    if(argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}

int main(void)
 {
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n = get_int("Number: ");
    for(int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        //if the ith number in the numbers array equals the number n
        {
            printf("Found\n");
            return 0;
            //if you want your main function to end prematurely you can just return a value
            //you return 0 to indicate success; and any other integer to indicate failure
            //usually 0 is false and 1 is true...the logic here:
            //the program works correctly thats 0
            //but there is an infinite number of things that can go wrong for which you need more numbers
        }
    }
    printf("Not found\n");
    return 1;
 }
