book = dict()  # dict() creates a new, blank dictionary
# to add a key called title and set the value equal to some book title dictname["nameOFkey"] = "nameOFvalue":
book["title"] = "Corduroy"  # There is bracket syntax but no longer use of an index for this dictionary,
                            # but using a string which functions as the key
book["author"] = "Don Freeman"
print(book["title"])

# The limitation of a dictionary is that you can only have one particular value for one particular key
# You could have a list of values for a key like title: although you canonly have one particular key and...
#... associate it with one particular calue, that value could be a list, it could be itself a dictionary,...
#... it could be any other object in Python you'd like to associate with that particular key

# If you were to print print(book["Corduroy"]) instead of print(book["title"]) you'd get a KeyError:
# = you can't look up some value by using its name, you can only do that using keys

# With a struct you have specified attributes, you can't really ass or remove attributes later; with a ...
#...dictionary you can odd or remove keys and values

# To define it all the way upfront:
book = {
    "title": "Goodnight Moon",
    "author": "Margaret Wise Brown"
}

# To create a list of books:
[{"title": "Goodnight Moon", "author":"Margaret Wise Brown"},
 {"title": "Curdoroy", "author": "Don Freeman"},
 {"title": "Curious George", "author": "Someone"}]
# ^ This is a list of individual dictionaries.
# These dictionaries have the same key, which is OK, because they are different dictionaries
