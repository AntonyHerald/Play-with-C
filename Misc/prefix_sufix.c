/* Use incremental & conditional Operator */

#include <stdio.h>

int main(void)
{
	int a = 2, b = 1;
	int x, y, z;


	printf(" a=2 value %d \n", a++ );
	printf(" a=2 value %d \n", ++a );
	printf(" a=2 value %d \n", (a++ && ++a) );   /* operational value true=0 and false=1 */
	printf(" a=2 value %d \n", (a++ || ++a) );
	printf(" b=1 value %d \n", (!b) );
	printf(" x value %d \n", (a++ && (!b)||++a) );

	return(0);
}

	
