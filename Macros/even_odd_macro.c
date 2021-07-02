/* 
 * The program valids given number is EVEN or ODD using 
 * #define macro
 *
 */

#include <stdio.h>

#define CHECKEVEN(n)	((n%2 == 0) ? 1 : 0)
#define CHECKODD(n)	((n%2 != 0) ? 1 : 0)

int main(void)
{

	unsigned int choice;

	printf("Enter an integer number: ");
	scanf("%d",&choice);

	if(CHECKEVEN(choice))
	    printf("The entered number %d is an EVEN\n",choice);

	else if(CHECKODD(choice))
	    printf("The entered number %d is an ODD\n",choice);
	else
	    printf("An Invalid Input\n");

	return 0;
}
