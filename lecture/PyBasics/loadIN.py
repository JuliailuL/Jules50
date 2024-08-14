import csv #header

# Syntax for reading
with open(FILENAME) as file: # "with open(books.csv) as file:"
# As long as you are indented in this block you're able to access that file through the name you gave it (='file')
    text = file.read()  # To read in all the text from that file > create a new variable called text and ...
                        #... set it equal to the result of calling file.read() = call 'file' and say file.read...
                        #... to take all data inside of it and store it iside a Python variable called text
# Open returns some file-object and one of the methods of that file-object is read
# This works for well for plain text files like .txt, but not for csv.


with open(FILENAME) as file:
    file_reader = csv.DictReader(file)
    # For csv there is a paticular kind of reader. DictReader basically means: Read every row of the csv file...
    # ...as a dictionary. Specifying the variable called file_reader serves as a helper to read this file and...
    # ...returns every row of that csv as a dictionary that can be iterated over.
    # DictReader when given a file allows you to iterate over it and get a dictionary for every row in the csv.
    for row in file_reader:
    # Iterating over file_reader, and every time it does it returns some dictionary to use in your program
        books.append(row)
        # Append a given row I read from the csv
# DictReader interprets the first line of a csv as the keys
#_______________________________________________________________________________________________________________

import csv

books = []

with open("books.csv") as file:
# with-syntax is used to open up a file in Python; opening a file that is already stored in the computer...
# ...called books.csv and call that file into my program.
    text = file.read()
    # ^ Reads all the lines in the file
    # To not read everything all at once / To not have all the text in the same variable: then you need a list...
    # of dictionaries

#________________________________________________________________________________________________________________

# "with" handles a few things:
with open("books.csv", "r") as file
    reader = csv.DictReader(file)   # As long as the lines are indented the file is only opened within the ...
    for row in reader:              # ...the with-statement. As soon as you unindent the file is...
        books.append(row)           # ...automatically closed

file = open("books.csv", )
reader = csv.DictReader(file) # reader =... and for... will be unindented because you have access to file
for row in reader:
    books.append(row)
file.close() # You have to close it yourself if you don't tun it with 'with...'

#1:10
