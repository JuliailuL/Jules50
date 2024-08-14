#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(sizeof(int)); //give me the address of an integer called x and store there the return value of...
                                  // ...malloc by asking malloc for (4 bytes/if thats the value of an int on this computer)

    int *y = malloc(3 * sizeof(int)); // this makes x effectively an array
        //an array is contiguous memory ...
        // ...and malloc returns to you a chunck of contiguous memory...
        // ...you can treat what comes back from malloc as an array
}

int main(void)
{
    //Prototype
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);
}
// run valgrind ./programname after make programname
// valgrind doesn't know when I should free the memory, that's up to me!
// -> Free it at the end of your function when you're definetly done with it,
// because once you free yout memory, you should not touch that variable again
