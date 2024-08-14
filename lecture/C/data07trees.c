// Capture the upside of having information that is kept in sorted order but...
//...still gives the dynamism to grow and shrink the data structure

// A binary search tree is a data structure that's kept in sorted order:
// here a node needs a number and not one, but two pointers: a left child and a right child:
// on the left side everything is smaller and on the right side everything is bigger
// It is in some sense also a recursive data structure, because you can say the same thing about each node
// Each of the subtrees compose a larger tree, ...
// or conversly the big tree is a composition of 2 subtrees plus one more (root) node

// Searching this is big O(log n) > binary search < but only if the tree is balanced

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}node;

// TO RUN A SEARCH ON THIS:
    bool search (node *tree, int number)
    if tree == NULL
    {
        return false;
    }
    else if (number < tree->number)
    // if the number you're looking for is less than the number in the tree at the moment/at that root
    {
        return search(tree->left, number);
        //search the left subtree:
        //return the recursive return value from the same search function passing in a slightly smaller subtree
        //If you want to search half of the tree just go there:...
        //...so go to the root of the tree ('tree'), fallow (->) the left-child-pointer (left) and pass that in =
        //...(pass in the left child pointer) BUT pass in the same number
    }
    else if (number > tree->number)
    //the number is bigger than the root of the tree
    {
        return search(tree->right, number);
        //search the right subtree instead
    }
    else (number == tree->number)
    // if the number you're looking for equals the number in the tree
    {
        return true;
    }
//searches for a number, but it'S doing it on just one half of the tree or the other.
// Because of the base case (tree == NULL): even if you get all the way to the bottom of the tree and try to go down...
//...the left child or the right child, but those pointers are null, then you know you didn't find it because you...
//...would have returned true sooner, if anything had in fact been equal

//Binary search trees by themselves don't guarantee any balance, if you get a perverse set of input and end up with...
//...a linked list for example
