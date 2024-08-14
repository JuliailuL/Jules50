from cs50 import get_int

# because there is no do while loop in -> infinte loop: untli you have what you want
while True:
    n = get_int("Heigth: ")
    if n > 0:     # if not it will keep looping
        break

for i in range(n):
    print("#")

for i in range(n):
    print( "?", end="" )
print()

print("!" * n)
# *Asterisk means multiply the string itself n many times (=concatinate it)

for i in range(n):
    for j in range(n):
        print("#", end="")
    print()

for i in range(n):
    print("?" * n)
