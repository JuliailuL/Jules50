from cs50 import get_string
answer = get_string("What's your name? ")

#the + is instead of a placeholder (%sth) and it connects two strings in this case
print("Hello, " + answer)

# the print function in python can do more automatically: it can take multiple arguments seperatet by comma and...
# ...by default Python is goin gto insert a space between its first and second argument. The comma before 'answer' means:
# Here comes my second argument
print("Hello,", answer)

# the most common way to put this in Python: format string or f string for short. If you prefix a string in Python with an 'f':
# you can then use curly braces iside of that string and python will interpolate what's inside those curly braces
print(f"Hello, {answer}")

# get_string is especially useful in C because scanf is hard to use correctly, in Python it's not that useful
answer = input("What's your name?\n") # for this you wouldn't need the cs50 library
print(f"Hello, {answer}")
