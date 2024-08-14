#include <cs50.h>
#include <stdio.h>

//recursion: a function that calls itself

void draw(int n); //void, because it doesn't need to return a value, it just has a side effect, which is printf.

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    //If nothing to draw (base case)
    if (n <= 0)
    {
        return; //return without doing anything
    }
    //Integers are signed by default (plus, 0 or minus)
    //-> without base case it would blindly subtract -1 until underflow (and thats at two billion)

    //print pyramid of height n - 1
    draw(n - 1);

    //print one more row
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
