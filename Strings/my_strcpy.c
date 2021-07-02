/*
 * Implement memcpy - implementation 
 * user defined string copy which can support 
 * 
 */

#include <stdio.h>
#include <string.h>

/* function prototype */
void mystrcpy(char* , const char* );

int main ()
{
   const char src[50]; 
   char dest[50];
   int len;

   printf("Enter a Sting\n");
   scanf("%s",src);

   printf("String %s \n", src);

   mystrcpy(dest, src);
   printf("Destination copied string = %s\n\n",dest); 

   mystrcpy(dest, "Hello World");
   printf("Destination copied string = %s\n\n",dest); 

   mystrcpy(dest, "10 20 30 40, 50, 60, 70 80 90 100");
   printf("Destination copied string = %s\n\n",dest); 
   return(0);
}


/* string copy function */
void mystrcpy(char* dest, const char* src)
{
    //while loop will run through till '\0' encountered
    while((*dest++ = *src++)); 
}



