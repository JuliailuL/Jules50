x = int(input("x: "))
y = int(input("y: "))

z = x / y
print(z)
# To show more/less than the default number of digits after the decimal point:
print(f"{z}")
print(f"{z:.3f}")
# f specifies that you want a format srting -> with f i think you need the {}
# With an f string you can configure the variable to print our to a specific...
#...number of digits

# There are special libraries for more percision for maths and finances etc.
# Floating point impercision is still a problem; integer verflow isn't in...
# ...in the latest version of Python

