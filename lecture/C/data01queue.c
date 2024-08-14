//implementing a queue in C

//via array: FIFO (first in first out)
const int CAPACITY = 50;
typedef struct
{
    person people[CAPACITY];
    int size;
}queue;

//stack: LIFO (last in first our), is implemented (almost) identical to a queue, but differs later in the code
 typedef struct
 {
    person people[CAPACITY];
    int size;
 }stack;

//enqueueing - push
//dequeueing - pop
