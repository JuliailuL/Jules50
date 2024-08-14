// Linked list: so you don't have to copy and move around data; sacrificing space for speed
// Metadata is an implementation detail, that helps you organize your actual data
/* To store a linked list you generally use twice as much space (for an address to go with the next chunck of memory) and
    one more value: a variable that points to a node (generic term for a box / a chunck of memory).*/
/* Inside each node is two values: the actual number and a pointer = data with metadata, the 'and one more' of line 3
    is one extra pointer to find those nodes*/


// this means: give me a definition for a structure called node:
typedef struct node  //without the node in this line, node would not exist until 4 lines later
{
    int number;
    struct node *next; //a pointer to another node
}node; // this last line now just gives you a synonym and shortens 'struct node' to just 'node'

node *list = NULL; // gives the beginning of a linked list
//-> give me a variable called list, that is a pointer to a node and set it equal to null so it won't point to a garbage value

node *n = malloc(sizeof(node)); // allocate space for node
// malloc returns a chunk'o'memory size of node nd stores it in a temporary variable called n, that itself is a pointer to a node
// n is now pointing to that chunk of memory

(*n).number = 1;
//*n means: go to whatever you're pointing at
// the dot / . operator means: when you're poining to a structure: go inside of it to the number field
// =1 : and then set whatever is there equal to the number one
n->number = 1; //can be used synonymously instead // this is also the most conventional way

// To update the next field:
n->next = NULL; //go into the next field and set it equal to null
//null because the whole point here was to allocate just one chunck of memory / one node:
//   you dont want a garbage value here that might be mistaken as a pointer to some random location

list = n; //  because the whole point is to set up a list and this line sais: whatever address is in n put it in list:
// now temporarily both pointers point to the same place -> list is what you care about long term / a global variable that...
//... you'll keep around long term, n was just a temporary pointer to get a chunk of memory and go to its location and...
//... update it woth those values and n will eventually propably go away


// CODE SO FAR AGAIN:
typedef struct node
{
    int number;
    struct node *next;
}node;

node *list = NULL;
node *n = malloc(sizeof(node));
n->number = 1;
n->next = NULL;
list = n;

// TO ALLOCATE SPACE FOR ANOTHER NODE AND TEMPORARILY STORE IT IN N
node *n = malloc(sizeof(node));
// TO PUT THE NUMBER TWO INTO THIS NODE.
n->number = 2;
// The numbers are not put into the list in ascending order (1,2,3,4)...
// ...each time you allocate a new node you prepend is to the beginning of the list...
// ...even though on this case it's going to look backwards

// AT THIS POINT YOU GOT:
// - list pointing to the original linked list
// - n pointing to the brand new node
// -> ultimately you want to connect these things because n is just temporary

// If you were to update the pointer to point at the number to you orphan number 1,
// ...because if no one is pointing at it you have orphaned a chunk of memory a.k.a. a memory leak INSTEAD:

n->next = list; //go to the 'next' field of the new node and put there the memory address of the original node...
//...list is pointing at the original node and you can just copy the address into the this next field ...
//...now you've updated the next field to point at the very thing that the original list is already pointing at

//GET RID OF THE TEMPORARY NODE CALLED n:
list = n;

//now you've got a linked list: list points to 2 and 2 points to 1
// if you want to allocate a third node you have to do the exact same thing:
// you habe to update the next field of 3 to point at the existing list (=2), before you update list itself

