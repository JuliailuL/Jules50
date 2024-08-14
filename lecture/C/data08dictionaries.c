// A dictionary is a data structure, that stores/associates keys and values (=words and definitions)
// Hashing: a function that takes any number of inputs and maps them to a finite number of outputs:
// like sorting a deck of cards according to their suits into 4 piles >
// >taking a number of inputs (52) in this case and mapping them to a finite number of outputs (4)
// Hash table: amalgam of arrays and linked lists.
// Here: Use the benefits arrays (speed, because of contiguousness) and also use linked lists
// Here: a hash table is an array of linked lists: an array of letters A through Z and then linked...
// ...lists of names that begin with the same letter. > those collisions are an expected problem with...
// ...a hash table, whereby two values from the same domain happen to map to the same value.

// searching a hash table is big O(n) in the worst case > big O gets smaller with a bigger array (not...
// ...just A but aa ab and so on) and therefore shorter linked lists or basically just an array of...
// ...linked lists and then you're back at constant time O(1) so long as every letter of the alphabet has...
// ...an ASCII value. This is memory-expensive!

typedef struct node;    // node in a hash table...
{
    char *name;         // ...storing a persons name

    char *number;       // ...and number

    struct node *next;  // ...and a pointer to the next such person in that chain if needed < this hopefully...
                        // ...is null all / most of the time, most of the time, but it is needed just in case...
                        // ...there is acollision
}node;

node *table[26];    // This is the hash Table itself > a variable called table of size 26
                    // and each of the locations in that array is a pointer to a node
                    // so it's null if there's no one there or its a valid address of the first node in the linked list

//input is someone's name > algorithm in the middle is the hash function > output is hash value or location in this case



