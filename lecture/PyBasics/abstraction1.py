# Good design is to define the functions at the end of the program
# Python works literal: top to bottom, left to right. You can't use a function first and define it later
# Even though you don't need a main function,  it's still very common to define one nonetheless.
# In the command line you have to call the main function yourself:

#define a function called main, the you can define your functions after main
def main():
    #call the meow function:
    meow()
    print("###")

    for i in range(2):
        meow()

#define the meow function:
def meow():
    print("meow")

main() # 'call main' is the last line of your file, because this satisfies the constraint that main() is...
#...defined on line '1' (well, or line 7) and meow is defined later than this, but we don't call anything...
#...until line 19.
# You can think of C as just having this line there magically for you
#1:19:30
