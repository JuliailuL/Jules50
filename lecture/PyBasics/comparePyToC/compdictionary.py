# a global variable called word and make it a set, meaning a collection of things that won'T contain duplicates:
word = set()

# create a function called check that takes as input a word
def check(word):
    # if I want to check if a word is in that set of words
    return word.lower() in words

# define a function called load, which takes an argument which is the name of the dictionary you want to load into memory
def load(dictionry):
    # open dictionry as a variable called file
    with open(dictionry) as file:
        # in there update a set of words to be the updated version of whatever is in this file as a result of ...
        #...reading it and then splitting its lines, whereby this file
        words.update(file.read().splitlines())
        # whereby this file has a long column of words, each of which is seperated by a new line -> splitine splits...
        #... all those into one big collection
    return True

# define...just like everything else in dictionry.c in week five
def size():
    # return the length of that set of words, where length (or len()) is a function itself in Python
    return len(words)

# there is no unloading in Python because Python manages memory for you

# 09:55
