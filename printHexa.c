/* This program is to print the hexa-decimal values 
 * for 0 to 127 (128) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, nxtline=16;

	system("clear");

#if 0
	for(i=0;i<128;i++)
	{

		if(i <= 15 )
		{
		  printf("%d=%x,  ",i,i);
		  if(i== 15 ) printf("\n");
		}

			
		if(i >= nxtline){
		  printf("%d=%x, ",i,i);
		   
		    if(i == (nxtline+13)){
		       printf("\n");    
		       nxtline += 14 ;
		     }
		}
	}
#endif
	printf("\n---Hexa Value --------\n");
	for(i=0;i<32;i++)
	{
	  printf("%d=%x, ",i,i);
	  if(i == (32/2)) printf("\n");
	}
	printf("\n\n---Octal Value --------\n");
	for(i=0;i<32;i++)
	{
	  printf("%d=%o, ",i,i);
	  if(i == (32/2)) printf("\n");
	}
	printf("\n");
 return 0;
}
