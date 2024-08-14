//"bad things can happen if you go past the end of an array"
//for array syntax check also searchLinear.c
//arrays are characterized by contiguousness from left to right

#include <cs50.h>
#include <stdio.h>

//Constant
const int N = 3;

//Prototype
float average(int length, int array[]);

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

float average(int length, int array[])
    //the empty square bracket means I don't know at the moment how many element the array is going to have,
    //but the compiler can figure it our for me
{
    //Calculate average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i]
    }
    return sum / (float) length;
}

//int main(void)
//{
    //const int N = 3
    //int scores[N];
    //for (int i = 0; i < N; i++)
    //{
    //    scores[i] = get_int("Score: ");
    //}
    //printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
//}
