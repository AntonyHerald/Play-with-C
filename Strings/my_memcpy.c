/* Implement memcpy - implementation 
 * user defined memory copy which can support 
 * all type of variable
 */

#include <stdio.h>
#include <string.h>

/* function prototype 
 * 1st void*  holds destination value
 * 2nd void*r holds source value
 * 3rd size_t holds size of the source 
 */
void mymemcpy(void *, void *, size_t );

int main ()
{
   const char sptr[50]; 
   char dest[50];
   int len;

   printf("Enter a Sting\n");
   scanf("%s",sptr);

   len = strlen(sptr); 
   mymemcpy(dest, sptr, len);

   printf("Destination str = %s\n\n",dest); 

   return(0);
}

void mymemcpy(void *destination, void *source, size_t n)
{
	int i;
	char *mSrc  = (char*)source;
	char *mDest = (char*)destination;

       for(i=0;i<n;i++)
       {
	 mDest[i] = mSrc[i];
       }
}


