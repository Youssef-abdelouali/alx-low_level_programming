#at this file you will find description for each tasks :
0. Preprocessor :
 a script that runs a C file through the preprocessor and save the result into another file.
 gcc -E "$CFILE" -o c
1. Compiler :
  a script that compiles a C file but does not link.
  gcc -c $CFILE
2. Assembler :
 a script that generates the assembly code of a C code and save it in an output file.
 gcc -S $CFILE
3. Name :
 a script that compiles a C file and creates an executable named cisfun
 gcc $CFILE -o cisfun
4. Hello, puts :
 a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
 int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
5. Hello, printf :
 a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
 int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}
6. Size is not grandeur, and territory does not make a nation :
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
7. Intel :
 a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
 gcc -S -masm=intel $CFILE
8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
  a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 #include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 1 (Success)
*/
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

