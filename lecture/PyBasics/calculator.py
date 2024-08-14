##include <cs50.h>
##include <stdio.h>

#int main(void)
#{
#    int x = get_int("x: ");
#    int y = get_int("y: ");

#    printf("%i\n", x + y);
#}

#====

from cs50 import get_int

x = get_int("x: ")
y = get_int("y: ")
print(x + y)


# for this there is no need for the cs50 library:
z = input("z: ")
a = input("a: ")
print(z + a) # in Python the + is concatenation not addition

# in Python you can't just cast of one thing to another, because a string is not a char(which can only have one character)
# in C there is a perfect mapping between single characters numbers in decimal, like 65 for A
# in Python you convert input to an int, in Python you convert you don't cast
# And just like in C you can nest functions where you call one function and pass its output as the input to another function
b = int(input("b: "))
c = int(input("c: "))
print(b + c)

# the above could also be written like this:
# x = input("x: ")
# x = int(x)

#or like this
#z = input("z: ")
#a = input("a: ")
#print(int(z) + int(a))

# int in the context of Python in itself is a function...
#...that takes a string as its input and returns the numeric, the integral equivalent


