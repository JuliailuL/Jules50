//IMPLEMENTS A SORTED LIST OF NUMBERS USING A LINKED LIST

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;


int main(int argc, chat *argv[])
{
    // MEMORY FOR NUMBERS
    node *list = NULL;

    // FOR EACH COMMAND LINE ARGUMENT
    for (int i = 1; i < argc; i++)
    {
        // CONVERT ARGUMENT INTO INT
        int number = atoi(argv[i]);

        // ALLOCATE NODE FOR NUMBER
        node *n = malloc(sizeof(node));
        if(n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;

        // IF LIST IS EMPTY     // If there's no list there and the list variable is null,
        if (list == NULL)       // just update it to point at this new node.
        {
            list = n;
        }

        // IF NUMBER BELONGS AT THE BEGINNING OF LIST
        else if (n->number < list->number)      // If the new node's number is less than the list's number here...
                                                //...then it belongs at the beginning of the list, because it's...
                                                //...smaller than any of the numbers already there.
        {
            n->next = list;                     // Update this new node's next field to point at the current linked list.
            list = n;                           // Update the linked list variable to the address of this new node.
        }

        // IF NUMBER BELONGS LATER IN LIST
        else
        {
            // ITERATE OVER NODES IN LIST
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)  // Does the node belong at the end or somewhere in the middle?:
                                                                  // Not just looking for the end this time, but comparing the...
                                                                  //...value inside of this new node against what is currently...
                                                                  //...in the list.
            {
                // IF AT END OF LIST        // If logically you find your way to the ent of the list, whereby the next field...
                if (ptr->next == NULL)      //...in the node's pointer variable equals null, then logically you didn't find an...
                {                           //...earlier spot for this node, then:
                    // APPEND NODE
                    ptr->next = n;          //...update that pointer's next fiels too equal the address of this new node.
                    break;                  //Then just break out, because you're done.
                }

                // IF IN MIDDLE OF LIST
                if (n->number < ptr->next->number)     // If the new node's number is less than the number in the next node, then:
                {
                    n->next = ptr->next;        //...update the new node's next pointer to be equal to:
                                                //...'whatever currunt node I'm pointing at's' next pointer.
                    ptr->next = n;              //Then update that pointer'S next field to equal the new node.
                    break;                      //s.o.
                    //-> doing a similar splice in the middle of this list but manipulating a node effectively...
                    //...to the left and the right to make room for this new node
                }
            }
        }
    }
}
// Running time is still O(n), but not as bad in practice as allways adding to the end of the list (appending)
