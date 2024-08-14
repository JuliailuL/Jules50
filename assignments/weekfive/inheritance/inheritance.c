// Simulate genetic inheritance of blood type

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Each person has two parents and two alleles
typedef struct person
{
    struct person *parents[2];
    char alleles[2];
} person;

const int GENERATIONS = 3;
const int INDENT_LENGTH = 4;

person *create_family(int generations);
void print_family(person *p, int generation);
void free_family(person *p);
char random_allele();

int main(void)
{
    // Seed random number generator
    srand(time(0));

    // Create a new family with 3 generations, returning a pointer to the most recent generation p
    person *p = create_family(GENERATIONS);

    // Print family tree of blood types
    print_family(p, 0);

    // Free memory
    free_family(p);
}

// Create a new individual with `generations`
person *create_family(int generations)
{
    // TODO: Allocate memory for new person
    person *new_person = malloc(sizeof(person));

    // If there are still generations left to create
    if (generations > 1)
    {
        // Create two new parents for current person by recursively calling create_family
        person *parents0 = create_family(generations - 1);
        person *parents1 = create_family(generations - 1);

        // TODO: Set parent pointers for current person
        new_person->parents[0] = parents0;
        new_person->parents[1] = parents1;
        /*Update the new person's parents. And usind the return value from those create_family
         functions.
        Setting parents[0] equal to the result of one recursive call and setting parents[1] equal
        to the result of some other recursive call*/

        // TODO: Randomly assign current person's alleles based on the alleles of their parents
        new_person->alleles[0] = parents0->alleles[rand() % 2];
        new_person->alleles[1] = parents1->alleles[rand() % 2];
        /* Inherit the alleles from the parent by looking at one parents two alleles, randomly
        choosing one and setting that as the child's allele 0 and then doint the same with the
        other parent*/
    }

    // If there are no generations left to create
    /* meaning generations == 1 you create an individual person with no parents*/
    else
    {
        // TODO: Set parent pointers to NULL
        new_person->parents[0] = NULL;
        new_person->parents[1] = NULL;

        // TODO: Randomly assign alleles
        new_person->alleles[0] = random_allele();
        new_person->alleles[1] = random_allele();
    }

    // TODO: Return newly created person
    return new_person;
}

// Free `p` and all ancestors of `p`.
void free_family(person *p)
{
    // TODO: Handle base case
    if (p == NULL)
    {
        return;
    }
    /*if the input to free family is null, there is no action you should take*/

    // TODO: Free parents recursively
    free_family(p->parents[0]);
    free_family(p->parents[1]);
    /*by calling the free_family function on each of the childs two parents. Recursicely then that
    will also call free_family on the child's grandparents (and higher generations)*/

    // TODO: Free child
    free(p);
    /*after the parents have been freed you use free to free the child as well ultimately freeing
    all of the memory */
}

// Print each family member and their alleles.
void print_family(person *p, int generation)
{
    // Handle base case
    if (p == NULL)
    {
        return;
    }

    // Print indentation
    for (int i = 0; i < generation * INDENT_LENGTH; i++)
    {
        printf(" ");
    }

    // Print person
    if (generation == 0)
    {
        printf("Child (Generation %i): blood type %c%c\n", generation, p->alleles[0],
               p->alleles[1]);
    }
    else if (generation == 1)
    {
        printf("Parent (Generation %i): blood type %c%c\n", generation, p->alleles[0],
               p->alleles[1]);
    }
    else
    {
        for (int i = 0; i < generation - 2; i++)
        {
            printf("Great-");
        }
        printf("Grandparent (Generation %i): blood type %c%c\n", generation, p->alleles[0],
               p->alleles[1]);
    }

    // Print parents of current generation
    print_family(p->parents[0], generation + 1);
    print_family(p->parents[1], generation + 1);
}

// Randomly chooses a blood type allele.
char random_allele()
{
    int r = rand() % 3;
    if (r == 0)
    {
        return 'A';
    }
    else if (r == 1)
    {
        return 'B';
    }
    else
    {
        return 'O';
    }
}
