# I don't know how to instal minilibx
# I don't know how I'm goint to test things
I could maybe make a makefile debug rule that compiles a test.c file instead of main...
Yeah, smartass, do that if you dare
# explanations
s_data structure:
	void *img: it's an array to improve read/write performanceo
	addr: points to the first 
	bits_per_pixel Number of bits that represent a pixel
	line_length: number of bytes per image line
	endian: can be 0, little endian or 1, big endian
	0: least significant bit comes first in memory
	1: most significant bit comes first in memory

# generalities
- [x] install minilibx
- [ ] Julia and mandelbrot
- [ ] mouse wheel zoom
- [ ] Different julia sets with paremeters
- [ ] parameters rendering options
- [ ] parameters for set selection
- [ ] if no parameter, display available parameters
- [ ] use colors
- [ ] Display image in a window
- [ ] smooth Window management
- [ ] ESC and x mus close the window
- [ ] MUST use images
- [ ] screen matrix and buffer matrix
- [ ] calculate screen, dump it to buffer, draw it, repeat
- [ ] coordinates should be converted
 things I think about
- should I make a loop for the execution
- Make another function for the screen output
- have a screen buffer (only one frame?)

# Program flow
1. parse input
2. if input is correct, 
