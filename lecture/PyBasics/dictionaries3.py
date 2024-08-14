books = []

# Add three books to the shelf
for i in range(3):
    book = dict() # Make a new, blank  dictionary (just by giving it a name) called book and set it equal to dict()
    book["author"] = input("Enter an author: ")
    book["title"] = input("Enter a title: ")
    # Add this dictionary to the list of books:
    books.append(book) # nameOFthatLIST.append(itemTOappend)

# Print list of books: loop over every individual dictionary to print out what is inside
for book in books:
    print(book)

for book in books:
    print(f"{book["author"]} wrote {book["title"]}.")

# Dictionaries have their own methods, e.g.:
#for book in books:
print(book.keys())

for book in books:
    if book["author"] == "Julia":
        print(book)
