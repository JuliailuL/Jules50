s = input("s: ")
t = input("t: ")

if s == t:
    print("same")
else:
    print("different")

u = input("Do you agree? ")

if u == "Y" or u == "y":
    print("Agreed")
elif u == "N" or u == "n":
    print("Not agreed")



# with a list you can check a bunch of things at once
v = input("Do you agree? ")

v = v.lower() # in C it would have been tolower(v), where you pass in the value v
# but in the world of Python and general object-oriented programming: if v is a string, therefore v is actually...
#...what is known in Python as an object. Objects can not only have values or attributes inside of them but...
#...also functionality built in: and like in C with a struct: if you want to go inside of sth: use the dot operator
# v.lower -> inside the string v is a fuction aka a method called lower()

if v is ["y", "yes"]:
    print("Agreed")
elif v is ["n", "no"]:
    print("Not agreed")

# you can also chain method calls together. Then line 19 and 21 would be combined like this:
# v = input("Do you agree? ").lower()
