/* Implement memcpy - implementation 
 * user defined string length which can support 
 * 
 */

#include <stdio.h>
#include <string.h>

/* function prototype of string length
 * const char* holds the string, who's length to be calculated
 */
int mystrlen(const char* );

int main()
{
   const char src[255]; 
   int len;

   printf("Enter a Sting\n");
   scanf("%s",src);

   printf("String %s \n",src);

   //mystrcpy("10 20 30 40, 50, 60, 70 80 90 100");
   printf("Length of the string is %d \n\n",mystrlen(src)); 
   return(0);
}


/* implementation of string length */
int  mystrlen(const char* src)
{
    //while loop will run through till '\0' encountered
    int count=0;
    for(int i=0; src[i]!='\0'; i++)
             count++;

    return(count);
 
}



