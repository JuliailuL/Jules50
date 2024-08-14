# Each pair of this list should be a key-value pair
# Define a dictionary by using two {} curly braces
# Each divtionary has two key-value pairs: name and its value and number and its value
people = [
    {"name": "Carter", "number": "123"},
    {"name": "David", "number": "456"},
    {"name": "John", "number": "789"},
]
# people is now a list of dictionaries

# Promt the user with the input function for someones name with the goal to look up that person's number
name = input("Name: ")

# For each person in the list of people...
for x in people: # in assigns the x variable to each of the dictionaries under people one at a time
    #...if the current persons name (=x?) equals whatever name the human typed in then...
    if x["name"] == name:
        number = x["number"] # Setting that number equal to x's number
        print(f"Found {number}")
        break
else:
    print("Not found")


name2 = input("Name2: ")

for person in people:
    if person["name"] == name2:
        print(f"Found {person['number']}")
        break
else:
    print("Not found")



# A dictionary in Python lets you index into it similar to an array with numbers:
# In C: person.name
# In Python: [] square brackets with strings inside the square brackets rather than numbers (line 17)


# Dictionaries are used whenever you want to associate sth with sth else


# Declare the 'people' to not be a list of dictionaries, but one big dictionary
# If you're only associating names with numbers you don't need to create special keys called "name" and "number"
people2 = {
    "Carter": "123",
    "David": "456",
    "John": "789",
}
# The downside is, that here you can only have one key and one value, you can't have a name, a number key and...
#...an email key and an address key...

name3 = input("Name3: ")
if name3 in people2:
# If the name I'm looking for is somewhere in that people dictionary:
    number = people2[name3]
    # Then go ahead and get that persons number by going into the dictionary, indexing into it at that person's name
    print(f"Found {number}")
else:
    print("Not found")
