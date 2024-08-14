from cs50 import get_int

while True:
    h = get_int("Heigth: ")
    if h > 0 and h < 9:
        break

space = h - 1
hash = 1

while h > 0:
    # for _ in range(space):
    #   print(" ", end="")
    print(" " * space, end="")
    print("#" * hash)
    space -= 1
    hash += 1
    h -= 1
