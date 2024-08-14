before = input("Before: ")
# the input function always returns a string and it's up to us to ast it to an int for ex
print("After: ")
for c in before:
    print(c.upper())

# if you want to change the character that's automatically used at the end of every line:
# pass in a second argument called end and assign it sth else. you can also specify nothing:
print("After: ", end="")
for c in before:
    print(c.upper(), end="")
print() # if you don't pass print an argument at all it automatically gives just the line ending (=new line)

# actually there is no need to loop over a whole string, because strings themselves come with methods:
# upper is a methos that comes with string and you don't need to call it on every character individually
print(before.upper())


before = input("Before: ")
after = before.upper()
print(f"After:  {after}")

before = input("Before: ")
# you can also put short bits of code into these format strings
print(f"After: {before.upper()}")

# C has positional parameters, Python as well. But Python also has named parameters like 'end'
