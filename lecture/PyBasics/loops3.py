text = "In the great"
for c in text:
    print(c)

text2 = "In the great green room"
words = text2.split() # Puts every individual word into its own string & then have those strings be ...
#...part of some list. It breaks apart the string at all the white space characters.

for word in words: # Words is not a string, but a list???
    print(word) # This will print every word in a new line

for word in text2.split():
    print(word, end=" ") # Prints the words in one line
print() # Prints a new line

for word in words[2], words[3]:
    for c in word:
        print(c)
# This writes each character in a new line without the white space that used to be between the individual...
#... words, because when text2 was .split(), it was turned into a list of words. Doing that it gets rid of...
#...all the spaces between the words

for word in words:
    if "e" in word:
# If you use it with a conditional you can do a linear search: is the character g inside this particular string
        print(word) # Then it'll do whatever is indented
print("________")

for word in words:
    if "r" in word[0]:
        print(word)
print("BUT!:", words[0])
print(".............")

# Using bracket notation to access particular elements of the list:
print(words[0:])
print(words[1:])# Those determine where the list starts

for word in text2.split()[2:]:
    print(word)

print(words[1:4]) # one through 4, not including 4.This is start and stop
print(".-.-.-.-.-.-.-.")

