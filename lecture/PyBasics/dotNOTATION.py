text = input("Your text with too many spaces at its beginning and end: ")
text = text.strip() # 'text =' to reassign the stripped version of text back to text!!!
#text.lower() will convert all characters to lower case, there is also .upper()
#text.capitalize() takes a string and capitalizes the first character (of the whole string) only
print(text)
