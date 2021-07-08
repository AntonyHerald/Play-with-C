/* 
 * Understand the code - few optimization technque use
 * This code finds the large value in the array (can extend for 2nd largest too)
 *
 */
#include <stdio.h>

#define MAX 10
int main()
{
	int arrayList[MAX];
	int fstLarge, sndLarge, i;

	fstLarge = sndLarge=0;

	printf("Enter %d random numbers \n",MAX);
	for(i=0;i<MAX;i++)
	{
	  scanf("%d",&arrayList[i]);

	  if( i==0 )  /* The 1st element of the array is put in fstLarge */
		fstLarge = arrayList[i];

	  if( arrayList[i] > fstLarge) /* from 2nd  iteration on large value checked */
              fstLarge = arrayList[i];
        }

	printf("Display the list entered\n");
	for(i=0;i<MAX;i++)
	{
		printf("%d ",arrayList[i]);
	}
	printf("\nThe 1st Largest = %d \n",fstLarge);
	//printf("The 2nd Largest %d \n",sndLarge);

	return 0;
}



