# The memory of lists is automatically handled in Python
# An array is about having memory contiguously, a list in Python is more like a linked list
# Python allocates memory for you and grow and shrink these lists:
# NO pointers or nodes, no implementing of linked lists, just get list as a datatype


from cs50 import get_int
# scores = [72, 73, 33] # in C this would be curly braces {}

# Make an open list:
scores = []
# This wouldn't work in C, where you can't say "give me an array, I'll figure out the rest later"...
# ...unless you resort to pointers and memory management or the like)
for i in range of(3):
    score = get_int("Score: ")
    # Now you want to add that score to the otherwise empty list: methods(functions that come with objects):
    scores.append(score)
    # Or you can do it like this:
    # Concatonate scores with itself by concatonating scores with itself
    # scores = scores + [score]
    # -> Taking whatever is in that list and adding the current store by addding it to its own list.
    # This will update the value as we go, it does in fact change the value of scores opposed to...
    # ...appending to the initial list
average = sum(scores) / len(scores) # len of a list tells you jow many things are in it
print(f"Average: {average}")

