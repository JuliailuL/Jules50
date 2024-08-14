#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(argc, char *argv[])
{
    // MEMORY FOR NUMBERS:
    node *list = NULL;

    // FOR EACH COMMAND LINE ARGUMENT:
    for (int 1 = 0; i < argc; i++)
    {
        // CONVERT ARGUMENT TO AN INT:
        int number = atoi(argv[i]);

        // ALLOCATE NODE FOR NUMBER:
        node *n = malloc(sizeof(node));
        if (n==NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;

        // IF LIST IS EMPTY
        if (list == NULL)
        {
            //THIS NODE IS THE WHOLE LIST
            list = n;
        }

        // IF LIST HAS NUMBERS ALREADY
        else
        {                                                         // Iterates over the existing linked list; it does so via temporary...
            // ITERATE OVER NODES IN LIST                         //...variable called pointer, that is initiallized at the beginning...
            for (node *ptr = list; ptr!= NUL; ptr ? ptr-> next)   //...of the list, pointing at the first node initially. On every...
                                                                  //...iteration that pointer variable is updated to point to the next...
                                                                  //...node (pointing one node ahead). Make sur ptr-variable is not null...
                                                                  //...because that would mean pointing past the end of the list.
            {
                // IF AT THE ENT OF LIST
                if (ptr->next == NULL)      // If inside of that node the current node's next field is null, that's the end of the list.
                {
                    // APPEND NODE
                    ptr->next = n;      // To append this new node set ptr->next, which is currently null, equal to the address...
                                        // ...of this new node, effectively appending that node to the end of the list.
                                        // For instance, if we started with a list of 1 ans 2, what we've just done is updates...
                                        // ...2's next field to be equal to the address of the node conaining 3.
                                        // Meanwhile, the node containing 3's netxt field is null by default,
                                        // because it is now the new end of the list.
                    break;
                }
            }
        }
    }

}
// Appending: finding the end of the list for each new node -> Running time O(n)
