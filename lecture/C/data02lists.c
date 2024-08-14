#include <stdio.h>
#include <stdlib.h> // gives access to malloc

int main(void)
{
    int list[3];

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }

    // to create a version of the obove code that can grow, eg to fit more numbers
    int *llist = malloc(3 * sizeof(int)); //in cases of error malloc returns NULL
    if (llist == NULL)
    {
        return 1;
    }
    llist[0] = 1;
    llist[1] = 2;
    llist[2] = 3;
    // usage of [] and int * means llist is being treated as a chunk of addresses of integers...
    // ...and pointer arithmatic automatically kicks in...
    // ...and "1" is automatically put in location 0 and "2" in location 1 times size of int, so 4
    // ...and "2" is automatically put in location 3, so 2 times size of int ->8
    // When you allocate space using malloc:
    //you can treat it as though it's an array using simpler notation than pointers

//to copy the previous array and add another number:2
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(llist);
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = llist[i]; //the ith location of tmlp gets the ith location of llist
    }
    tmp[3] = 4;

    free(llist);
    //to have llist point at this (the tmp one) chunk of memory:
    llist = tmp;

    for (int i = 0; i < 4 ; i++)
    {
        printf("%i\n", llist[i]);
    }
    free(llist);
    return 0;
}
