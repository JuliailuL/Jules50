/*A trie is a tree of arrays

Example dictionary:
Every node is an array and every location in this array represents a letter of the alphabet.
The root node is an array of 26 locations.
To insert names into a trie you hash again and again, creating one array for every letter in
your word.
26 nodes which are initially null by default
You want to insert "TOAD":
- Find the location for T based on it's number 0 through 25
- Change the null of T to be a pointer to another node, aka another array
- and then go into this second array and hash on the 2nd letter of Toad's name: O
- Set a pointer to a third node in the tree
- Here find again the 3rd letter
    a.s.o until the last letter
To indicate where Toad's name ends...you need to do sth...but what again?
Another name to add: TOADETTE:
- Toadette is a superstring of Toad (=it is linger but shares a common prefix)
- So Toadette could continue and you have anothr node for each the E, the Ts and the last E.
- The last letter has to be marked specially as the end of her name as well.
Toad is in this ditionary as a key, so is Toadette.
A dictionary is a collection of key-value-pairs, just like a stack and a queue.
    The names are stored implicitly, so not by storing the actual letter, but by using valid
pointers that point to another node.*/

typedef struct node // every trie is now redefined as an:
{
    struct node *children[26]; // array of 26 and
    char *number;   //in each of these nodes ther is room for the persons phone number
}node               //if there is a non-null number here (char *number), it means a pointer...
                    //...to a (phone) number, but if there is null it means there is the 'T'...
                    //... or 'A' which is not actually the end of the name.

/*This data structer can be navigated in constant time
All you need to keep track of is one pointer called trie that is a pointer to the first of
these nodes; it is the so called root of the trie

RUNNING TIME:
There propably is a limit for the number of characters in the name = k   ->   O(k) = O(1) for
searching, inserting into or deleting from a trie. The number of stored names does not affect
the steps for searching; it only depends on the length of their names which is a constant value.
    Downside: Empty pointers = huge amount of (memory) space.*/

