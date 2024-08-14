from cs50 import get_float

while True:
    cents = get_float("Change: ")
    if cents > 0:
        break
cents = int(cents*100)

quarters = 0
while cents >= 25:
    quarters += 1
    cents -= 25

dimes = 0
while cents >= 10:
    dimes += 1
    cents -= 10

nickles = 0
while cents >= 5:
    nickles += 1
    cents -= 5

pennies = 0
while cents >= 1:
    pennies += 1
    cents -= 1

print(quarters + dimes + nickles + pennies)
