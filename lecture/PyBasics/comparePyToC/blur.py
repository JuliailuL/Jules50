 #from the Python image library (PIL) import sth called image and image filter
from PIL import Image, ImageFilter

before = Image.open("bridge.bmp")
#create another variable called after and set that equal to ...and give it a value how much you want to blur it
after = before.filter(ImageFilter.BoxBlus(10))
#call after.save and save it as a file called ("out.bmp")
 after.save("out.bmp")
