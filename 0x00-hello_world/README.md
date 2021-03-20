# alx-low\_low\_level\_programming

## 0x00. C - Hello, World Project

### Tasks

#### mandatory tasks
---
__0. Preprocessor__

Write a script that runs a C file through the preprocessor and save the result into another file.
- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c

__1. Compiler__

Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c
	- Example: If the C file is main.c, the output file should be main.o

__2. Assembler__

Write a script that generates the assembly code of a C code and save it in an output file.
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c
	- Example: if the C file is main.c, the output file should be main.s

__3. Name__

Write a script that compiles a C file and creates an executable named cisfun.
- The C file name will be saved in the variable $CFILE

__4. Hello, puts__

Write a C program that prints exactly "Programming is like building a multilingual puzzle", followed by a new line.
- Use the function puts
- Your are not allowed to use printf
- Your program should end with the value 0

__5. Hello, printf__

Write a C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line.
- Use the function printf
- You are not allowed to use the function puts
- Your program should return 0
- Your program should compile without warning when using -Wall gcc option

__6. Size is not grandeur, and territory does not make a nation__
Write a C program that prints the size of various types on the computer it is compiled and run on.
- Warnings are allowed
- Your program should return 0
- You might have to install the package libc6-dev-i386 on your linux(vagrant) to test the -m32 gcc option

#### Advanced Tasks
---

__7. Intel__
Write a script that generates the assembly code(intel syntax) of a C code and save it in an output file.
- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension .s instead of .c
	- Example: if the C file is main.c, the output file should be main.c

__8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity__
Write a C program that prints exacley _and that piece of art is useful" - Dora Korpar, 2015-10-19_, followed by a new line, to the standard error.
- You are not allowed to use any functions listed in the NAME section of the man(3) printf or man(3) puts
- Your program should return 1
- Your program should compile without any warnings when using the -Wall gcc option
