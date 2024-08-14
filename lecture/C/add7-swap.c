 #include <stdio.h>

void swap(int a, int b);
void swap2(int *a, int *b);

int main (void)
{
    int x = 1;
    int y = 2;
    printf("x is %i, y is %i\n", x, y);

    swap(x, y);
    printf("x is %i, y is %i\n", x, y);

    swap2(&x, &y);
    printf("x is %i, y is %i\n", x, y);

}

//passing by value (won't work):
void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}//this is also passing by copy ->1.

//passing by reference (will work)
void swap2(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}// -> 2.

// 1.:
// a is a copy of x and b is a copy of y, but they are seperate bytes...
// a is a different location than x and y is a different location than y...
// this means we are just copying the patterns of bits from one to the other
// so yes, the function swaps a and b but not x and y
// the work was done correctly, but on the wrong scope (=done on copies)

// 2.:
// here you don't change integers, you change addresses
// temp doesn't have to change, it is just a variable, that's ready for some value
// 31: go to the address a and get it's value and put it in temp
// 32: go to the value in b and grab it and then go to the value at a and...
//     ...change it to be that at b.
// 33: go to the address b and put temp there instead
// when swap is called: a is a pointer to x and b is a pointer to y
// we have not changes a and b per se, we used them as little breadcrumbs to...
// ... lead us to the right location in the computers memory, so when swap...
// ... returns this time, even though it's a void function, it has made a difference.
