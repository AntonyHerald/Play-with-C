/* Program to demonstract all the escape sequence in C */
/* Program to demonstract int, oct & hexa representation */

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int integer, octal, hexa;
	char x, y, z;
	a = 48;
	b = 65;
	c = 97;

	x = '1';
	y = 'B';
	z = 'b';

	integer	= 1000;
	octal 	= 010;;
	hexa	= 0x15;
	
	printf("Hello-world " "1\a2\a3\a4\a5\a6\a");    /* \a for beep / alarm */
	printf("\t Hello-world ");			/* \t 6 space tab */
	printf("\n Hello \\ world \n");			/* \n & \\  newline & insert \ */
	printf("Hello world \b\b\b\b");			/* \b for back space */
	printf("\n Hello-world \r");		        /* \r return carriage */

	printf(" Value of =  %d %d %d \n", a,b,c);
	printf(" Value of =  %c %c %c \n", a,b,c);

	printf(" Char  of =  %d %d %d \n", x, y, z);
	printf(" Char  of =  %c %c %c \n", x, y, z);

	printf(" Integer value %d \n",integer);
	printf(" Octoal  value %o \n",octal);
	printf(" Hexa	 value %x \n",hexa);



	return(0);

}
