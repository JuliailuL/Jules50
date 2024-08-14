#from sys import argv

#if len(argv) != 2:
    #print("Missing command-line argument")
    ## Exit out of the program entirely using:
    #sys.exit() #...which is a function therein
    ##notice that exit is a function in sys

# So import all of sys
import sys
# ^This doesn't give you direct access to argv: -> you have to write: sys.argv
if len(sys.argv) != 2:
    print("Missing command-line argument")
    sys.exit(1)

print(f"hello, {sys.argv[1]}")
sys.exit(0)
