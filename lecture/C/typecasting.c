#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

//  float z = x / y; would truncate!
//  typecasting -> (float)
    float z = (float) x / (float) y;
    printf("%f\n", z);
}

int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;
    printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
    //change the denominator (3.0).
    //If there is one float in the math the whole arithmetic expression becomes a floating point math instead of integer math
}
#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", c1, c2, c3);
    //this will not print HI!, it prints 72 73 33
    //in case of chars and ints you can treat one as the other, as long as there are enough bits to fit one in the other
    //you don't have to cast!
}

