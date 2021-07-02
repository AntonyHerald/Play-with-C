/* This program has 3x4 dimensional array
 * Display of contiguous of memory allocation
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
  unsigned int array[3][4] = {
                     {10,11,12,12},
		     {20,21,22,23},
		     {30,31,32,33}
		    };
  int i, j;

  system("clear");
  for(i=0;i<3;i++)
  { 
      //Print the ith value, Address of each array block contiguously for 4 blocked
      printf("Address of %dth Start Addr = %u <=> %u\n",i, array[i],*(array+i));
      for(j=0;j<4;j++)
      {
	      printf("Value = %d ",array[i][j]);
	      printf("%d ",&array[i][j]);

	      //this printf will print the value of each array using pointer reference
	      printf("%d ",*(*(array+i)+j));
      }
      printf("\n\n");
   }
}

