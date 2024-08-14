names = ["Carter", "David", "John"]

name = input("Name: ")

for n in names:
    # If the current name equals what the human typed in:
    if name == n:
        print("Found")
        break   # In Python if you break out of a loop -> that's it for the for-loop
# In Python even for-loops can have an else-clause, which is called when you get all..
#...the way through the list that you're looping over and not call line 9 = you never...
#...break out of the loop, then here is an else-clause to be associated with it
else:
    print("Not found")


# ^ This is correct, but not well designed
# This is better designed:


name2 = input("Name2: ")
if name2 in names:  # Python will do linear search for you
    print("found")
# only if it doesn't find it will this else clause execute instead
else:
    print("not found")
