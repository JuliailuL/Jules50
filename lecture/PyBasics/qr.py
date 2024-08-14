import qrcode

# Create a variable called img and set it equal to this lipbrary's/qrcode's function called make
img = qrcode.make("https://youtube.com")
# Inside of this img variable, which is a different data type, that this library gives and that...
#...doesn't come with Python per se, you can save a file like 'qr.png' and save it in the 'PNG' format...
#...(= the Portable Network Graphic)
img.save ("qr.png", "PNG")

# ^ This should create a QR code containing that particular URL nut not as text, but rather as an actual...
#...image, that I can send, post online or in our case generat it into my code space and then open
