#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(int argc, char *argv[])
{
    node *list = NULL;    //declare a linked list called list and initialize it to null

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);     //ASCII to integer

        node *n = malloc(sizeof(node));     //allocate a pointer called n and set it equal to the return value of malloc;
                                            //asking malloc for the size of one node

        if (n == NULL)     //if malloc returns null, free memory thus far
        {
            return 1;
        }

        n->number = number;     // go into n, follow that pointer to the number field and set it equal to the actual number
                                // n is currently pointing at a chunck of memory that is big enough to fit a node
                                // n->number: go to that chunck'o'memories top half of the 'rectangle' (the number field)...
                                // ...and update that number to be whatever the human typed in after at the commandline...
                                // ... and what we converted on line 16 to an int.

        n->next = list;     // go to this current node and set that equal to next;
                            // = inititalize the 'next' field of this new node to point at the existing list.
                            // to insert this new node in front of any nodes that already exist:

        list = n;   //update the list itself to point to n
    }

    // PRINT WHOLE LIST:    //because everything is prepended it looks like: 3, 2, 1
    node *ptr = list;       //a pointer to a node and initialize that pointer to be the list itself
    while (ptr != NULL)     //so long as that pointer is not at the end of the list
    {
        printf("%i\n", ptr->number);     //print out whatever ptr currently points at
        ptr = ptr->next;
    }
}
// RUNNING TIME for inserting into a.k.a prepending a into a list is O(1):
// Constant time insertion of the nodes
// -> super fast, because it doesn't matter how big the list is
// -> a linked list is a dynamic data structure  <- you don't habe to knoe in advance how big it is going to get
// SEARCHING TIME is O(n):
// <- because the memory is not contiguous a.k.a not back-to-back, it is everywhere
// -> binary search is not possible

