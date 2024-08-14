#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //a CSV file is a lightweight spreadsheet that you can open in Apple Numbers, Google Spreadsheets, MS Excel
    // ...but CSV means all values are seperated by comma. comma means new column.
    FILE *file = fopen("phonebook.csv", "a");
    //open a file called phonebook.csv and you have to tell fopen how you want to open it: r opens for reading, ...
    //...w for writing, a for appending (so that new contacts are added to the file and not overwirtten with w)
    //fopen returns a pointer to a file FILE *file is a pointer that file in memory
    //think of fopen as opening the file and returning the address thereof in the computers memory
    // FILE *file is a pointer to that file in memory

    // higher risk for mistakes when dealing with pointers:
    if (file == NULL) //file is not found or sth isn't working on the server
    {
        return 1;
    }
    // any time a function returns a pointer, check if it's null, because if it is per the documentation it ...
    // ...almost always means sth has gone wrong

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    //safe to the csv file:
    fprintf(file, "%s,%s\n", name, number); // \n to add a new line in the file

    fclose(file); // close the file
}

