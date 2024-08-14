#include <cs50.h>
#include <stdio.h>

int main(void)
 {
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    //this is the syntax to declare an array of values and know in advance what the values are

    int n = get_int("Number: ");
    for(int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        //if the ith number in the numbers array equals the number n
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
 }
