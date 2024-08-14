# Define a function get_int and have it take a promt (= a string to show the user,
# to ask them for an integer)
def get_int(prompt):
    # Return the return value of input(), passing that samw value to imput,
    # because input shows the user a string of text. But convert it to an int
    return int(input(prompt))


def main():
    x = get_int("x: ")
    y = get_int("y: ")

    print(x + y)


main()
# ^his whole prog wouldn't work if you were to type in 'cat'



# This will 'run' with cat:
def get_int(prompt):
    # Instead of get_int blindly returning the integer conversion of whatever input...
    #...the user gives me you 'try' to do this instead:
    try: #try to do this except sth goes wrong....
        return int(input(prompt))
    #...exceeot if there is a value error in which case...
    except ValueError:
        #...do sth else:
        print("Not an integer")

def main():
    x = get_int("x: ")
    y = get_int("y: ")

    print(x + y)

main()



# This will keep prompting untill you type an integer:
def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            # print("Not an integer") < this would promt every iteration
            pass # like this it'll just silently try again and again

def main():
    x = get_int("x: ")
    y = get_int("y: ")

    print(x + y)

main()

