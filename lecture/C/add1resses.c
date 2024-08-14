// Access the locations of variables inside the computers memory in C
// &: the adress-of-operator; using a single ampersand (&) to ask at what adress the variable is
// *: the dereference operator takes you to that location/that adress in memory
// int * : is a variable type
//          -> white space doesn't matter in this context: int* p, int * p and int *p are all the same
//          BUT: the dconventional way is prefixing the variables name with * because:
//               it avoids getting into trouble when declaring multiple variables at a time.

// Pointer: - variable whose purpose is to store the adress of some value
//          - the address of a variable that you could even store in another variable called itself a pointer
//          - a pointer stores the adress of the int, but the pointer itself has a different adress

// (int = 4 bits, pointers 8 bits)

#include <stdio.h>

int main(void)
{
    int n = 50;

    printf("%i\n", n);
    printf("%p\n", &n); // %p (p for pointer to print out an adress; &n is the adress of the variable n.

    int *p = &n; // give me a variable called p, inside of which I can store the adress of an integer
                //  specify a data type int, then a star/* and the name of a variable

    printf("%p\n", p);
    printf("%i\n", *p); //go to the adress and show me what's inside of the computers memory there
                        //when you do a star/* and then the name of a pointer without tspecifying a type: it just means go there
                        //go to the adress and show me what's inside of the computers memory there

    // int * is a variable type
    // -> white space doesn't matter in this context: int* p, int * p and int *p are all the same
    // BUT: the conventional way is prefixing the variables name with * because:
    // it avoids getting into trouble when declaring multiple variables at a time.
}

