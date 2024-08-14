#include <cs50.h>
#include <stdio.h>
#include <string.h>

//typedef int integer; //give me a data type called integer that is actually an int

//structure: variable that contains any number of other variables
typedef struct // typedef: keyword for define/invent the following data type
{
    //inside the curly braces are all of the types of variables you want to associate with this new data type
    string name;
    string number;
} person; //after the curly braces is the name you want to give the data type
//-> give me a datatype called person that is actually this whole structure within the curly braces 

int main(void)
{
    person people[3];    //an arry of type person called people woth room for three people
    people[0].name = "Carter"; //go inside person 0 and access their name field/attribute and set it equal to Carter
    people[0].number = "123";

    people[1].name = "David";
    people[1].number = "456";

    people[2].name = "John";
    people[2].number = "789";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Nor found\n");
    return 1;
}
