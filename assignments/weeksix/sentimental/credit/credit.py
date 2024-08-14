from cs50 import get_int

while True:
    no = get_int("Number: ")
    if no > 1:
        break

one = no % 10
two = int(no % 100 / 10) * 2
two = int(two % 100 / 10) + (two % 10)
three = int(no % 10**3 / 10**2)
four = int(no % 10**4 / 10**3) * 2
four = int(four % 100 / 10) + (four % 10)
five = int(no % 10**5 / 10**4)
six = int(no % 10**6 / 10**5) * 2
six = int(six % 100 / 10) + (six % 10)
seven = int(no % 10**7 / 10**6)
eight = int(no % 10**8 / 10**7) * 2
eight = int(eight % 100 / 10) + (eight % 10)
nine = int(no % 10**9 / 10**8)
ten = int(no % 10**10 / 10**9) * 2
ten = int(ten % 100 / 10) + (ten % 10)
eleven = int(no % 10**11 / 10**10)
twelve = int(no % 10**12 / 10**11) * 2
twelve = int(twelve % 100 / 10) + (twelve % 10)
thirteen = int(no % 10**13 / 10**12)
fourteen = int(no % 10**14 / 10**13) * 2
fourteen = int(fourteen % 100 / 10) + (fourteen % 10)
fifteen = int(no % 10**15 / 10**14)
sixteen = int(no % 10**16 / 10**15) * 2
sixteen = int(sixteen % 100 / 10) + (sixteen % 10)

checksum = one + two + three + four + five + six + seven + eight + \
    nine + ten + eleven + twelve + thirteen + fourteen + fifteen + sixteen

checksum = checksum % 10

visa1 = int(no / 1000000000000)
visa2 = int(no / 1000000000000000)
amex = int(no / 10000000000000)
master = int(no / 100000000000000)


if checksum != 0:
    print("INVALID")
elif visa1 == 4 or visa2 == 4:
    print("VISA")
elif amex == 34 or amex == 37:
    print("AMEX")
elif master >= 51 and master <= 55:
    print("MASTERCARD")
else:
    print("INVALID")
