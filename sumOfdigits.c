/* Program to sum-up all the digits in the give number and display total  */


#include <stdio.h>

int main(void)
{
	int total, value, remainder, sum = 0 ;

	printf("Enter the Number - to sum-up all digiits \n");
	scanf("%d",&value);

	printf("The value is %d \n",value);

	total = value;

	while (total !=0 ) {

		remainder = total % 10;

		sum 	= sum + remainder ;
		total 	= total/10;
		printf("Remainder=%d, sum=%d, total=%d \n",remainder, sum, total);

	}
	printf("sum of the digits = %d \n", sum);

	return (0);
}

