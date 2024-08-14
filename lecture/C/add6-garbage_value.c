#include <stdio.h>

// garbage values are remnant of the past,
// they are values of variable that you did not proactively set yourself as intended

int main(void)
{
    int scores[102];
    for (int i = 0; i < 102; i++)
    {
        printf("%i\n", scores[i]);
    }
}
// -> when you create variables of your own and you do not give them values of your own...
// ...who knows what might ne there
// in some cases this gets automativally initialized to all zeros
// DISTRUST THE VARIABLE UNLESS YOU YOURSELF PUT A VALUE THERE

int main(void)
{
    int *x;
    int *y;
    // a variable called x and a variable called y both of type pointer
    // x and y are supposed to be the adresses of two integers

    x = malloc(sizeof(int));
    // malloc the size of an int and store it in x...
    // giving space for x even though this could be done by just not using the star

    *x = 42; //go to x, go to that address in memory and put the number 42 in there
    //*y = 13; // same here, but previously there was no memory allocated for y, there was no value assigned to y...
    //...this means it's still a garbage value...it could be 0, or a negative number...if it's a positive number it...
    //...could be an actual adress for somewhere in the computers memory. *y means go there
    // -> who knows what memory you're touching -> that's how computers crash. -> so this line needed to go

    y = X; // set y equal to x, so they are the same

    *y = 13; // ^ this means that now if you do star y and go to the address that's the same thing as going to ...
}            // ...the address in x and this has the effect of changing the 42 to 13
// the whole code is correct as long as you don't blindly dereference y by using *y notattion
