// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// words read from dictionary
int dictsize = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO

    // hash the word in order to obtain hash value
    unsigned int indx2 = hash(word);

    // access linked list at that index in the hash table
    node *cursor = table[indx2];

    // traverse the linked list:
    while (cursor != NULL)
    {
        if (strcasecmp(word, cursor->word) == 0)
        {
            return true;
        }
        // keep moving cursor until you get to NULL, checking each node for the word
        cursor = cursor->next;
    }
    // when curser becomes NULL we've reached the end of the linked list and:
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    int j = strlen(word);
    unsigned int indx = 0;
    for (int i = 0; i < j; i++)
    {
        indx += (toupper(word[i]) - 'A');
    }
    return indx % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    // Open the dictionary file
    FILE *source = fopen(dictionary, "r");
    if (source == NULL)
    {
        return false;
    }
    // Read strings from the file one at a time
    char word[LENGTH + 1];
    while (fscanf(source, "%s", word) != EOF)
    {
        // Create space for a new hash table node
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return false;
        }
        // Copy the word into the new hash table node
        strcpy(n->word, word);
        unsigned int indx = hash(word);
        n->next = table[indx];
        table[indx] = n;
        dictsize += 1;
    }
    // Close the dictionry file
    fclose(source);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    if (dictsize > 0)
    {
        return dictsize;
    }
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    for (int i = 0; i < N; i++)
    {
        node *cursor = table[i];
        node *tmp = cursor;
        while (cursor != NULL)
        {
            cursor = cursor->next;
            free(tmp);
            tmp = cursor;
        }
    }
    return true;
}
