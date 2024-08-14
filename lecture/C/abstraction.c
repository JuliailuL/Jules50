#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size); //size is a "place holder", when the function is called in main "n" is used ond not "size"

int main (void)
{
    int n = get_size();
    print_grid(n);
}


int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    //Print average
    printf("Average: %f\n", average(N, scores));
    //call the "average" function, pass in the length of the array and the array itself...
    //and hope that it returns a float that'll then get plugged into %f
}
