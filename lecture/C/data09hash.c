// A hash funktion is an array of linked lists

#include <ctype.h>  //gives toupper

/*A function called hash who's argumens is a string, a name of which is word, "where word is like the first word in their
name"; thw function should return an int, which in this case would ideally be a number from 0 to 25, inclusive*/
int hash(char *word)
{
    // pass in the first letter of that word, capitalize it, substract 65, what'll give a number between 0-25
    return toupper(word[0]) - 'A';
}
// ^This will still need error checking, in case of punctuation


/* It is conventional in C if you pass in a char * to a function and you have no intention of letting that function change
the string you should declare the argument to that function as const. so the name cannot be changed in this function.*/
int hash(const char *word)
{
    return toupper(word[0] - 'A');
}


// Because in this case you're using the output, the integer, as a location in an array it had better not be negative.
// If you want to impose that in code: the int, that'a being returned, has to be unsigned
unsigned int hash(const char *word)
{
    return toupper(word[0] - 'A');
}

/* In a hash table unless you get really lucky with the inputs (generally you wont) it's big O(n) running time, because
in the worst scenario you have one long linked list.

 Suppose you have a uniform distribution of friends where 1/26 of them each start with a different letter in the
alphabet, then technically your running time of a hash table for searching it or insterting, deleting would be technically
big O(n/k). k is the number of buckets, a constant.
BUT you get rid of constant factors! Aaand still end up with O(n). Here you veer away from what is theoretically right to
what is practically right. In the real world 26 times faster actually is 26 times faster: O(n/K) is a much better running
time than O(n).

A good hash function makes sure there are almost no collisions and is very close to O(1) -> constant time.*/
