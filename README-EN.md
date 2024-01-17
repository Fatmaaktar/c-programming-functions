# 💻 C Programing  

## C programming language standard functions and their purposes:  


### 📜conio.h Library Functions:  

**clrscr:** Clears the screen.  
**delline:** Deletes the line where the cursor is located.  
**clreol:**  Clears the portion of the line from the cursor position to the end of the line.  
**insline:**  Inserts an empty line.  
**textcolor:**  Defines the text color on the screen (colors range from 0 to 15).  
**textbackground:**  Defines the background color on the screen.  
**lowvideo:**  Diminishes the appearance of the text.  
**highvideo:**  Enhances the appearance of the text.  
**normvideo:**  Resets the text to normal appearance.  
**wherex:**  Returns the horizontal position of the cursor on the text screen.  
**wherey:**  Returns the vertical position of the cursor on the text screen.  
**gotoxy:**  Positions the cursor on the text screen at the specified coordinates (x, y).  
**kbhit:** Checks if any key is pressed.  
**cprintf:**  Prints formatted output.  
**cscanf:**  Reads formatted input.    

### 📜string.h Library Functions:

**strlen** Returns the number of characters in the given string.  
**strlwr:** Converts all characters in the given string to lowercase.  
**strupr:** Converts all characters in the given string to uppercase.  
**strrev:** Reverses the given string.  
**strcat:** Appends the source string to the end of the destination string.  
**strcmp:** Compares two strings.  
**strstr:** Searches for the second string within the first string and returns the address of the first occurrence.  
**strchr:** Searches for a character within the string and returns its address.  


### 📜math.h Library Functions:

**abs:** Returns the absolute value of the given integer.  
**cos:** Returns the cosine of the given angle in radians.  
**sin:** Returns the sine of the given angle in radians.  
**tan:** Returns the tangent of the given angle in radians  
**pow:** Exponential power function.  
**log:** Returns the logarithm of the given number.  
**sqrt:** Returns the square root of the given parameter.  
**ceil:** Rounds up to the nearest integer.  
**floor:** Rounds down to the nearest integer.  

### 📜stdio.h Library Functions:

**gets:** Reads a string from the input device.  
**puts:** Writes a string to the output device.  
**getw:** Reads an integer from a file.  
**putw:** Writes an integer to a file.  
**getc:** Reads a single character from a file.  
**putc:** Writes a single character to a file.  

### 📜time.h Library Functions:  

**clock:** Retrieves the current system time information when called.  
**time:** Returns the current time information in seconds.  

### 📜dos.h Library Functions:

**settime:** Modifies the system time information.  
**gettime:** Retrieves the system time information.  
**delay:** Pauses the program for the specified number of milliseconds.  
**sleep:** Pauses the program for the specified number of seconds.  
**sound:** Produces sound from the PC's sound generator at the specified frequency.  

### 📜stdlib.h Library Functions:

**atoi:** Converts a string to an integer.  
**atol:** Converts a string to a long integer.  
**atof:** Converts a string to a floating-point number.  
**itoa:** Converts an integer to a string.  
**div:** Used in integer division operations.  
**max and min:** Returns the greater and smaller of two integers, respectively.  
**rand:** Generates a random number.  
**random:** Generates a random integer within a specified range.  
**randomize:** Initializes the random number generator.  
**exit:** Terminates the program.  


### 📜ctype.h Library Functions:

**toupper:** Converts the given parameter to uppercase.  
**tolower:** Converts the given parameter to lowercase.  
**toascii:** Converts the given parameter to a code between 0 and 127.  
**isprint:** Returns true if the character is printable.  
**isalpha:** Returns true if the given value is a letter.  
**isdigit:** Returns true if the given value is a digit.  

