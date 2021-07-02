/* Implement string Compare  - implementation 
 * user defined string compare which can support 
 * 
 */

#include <stdio.h>
#include <string.h>

#define SUCCESS 0
#define FAIL 	1

/* function prototype of string compare
 * 1st char* string 
 * 2nd char* string 
 * bool return - bool 0 if equal, else return 1 
 */

int mystrcmp(char* , char* );

int main ()
{
   char src1[50]; 
   char src2[50];
   int val = 0 ;

   printf("Enter 1st Sting\n");
   scanf("%s",src1);

   printf("Enter 2nd Sting\n");
   scanf("%s",src2);

   printf("String to be compared %s  %s \n", src1, src2);

   val = mystrcmp(src1, src2);
   printf("Value of Val %d \n\n",val);
   if (val == SUCCESS)
	   printf("Compared strings are = EQUAL\n"); 
   else
	   printf("Compared strings are !! NOT EQUAL\n"); 

   return(0);
}


/* string compare implementation */
int  mystrcmp(char* src1, char* src2)
{
    int i=0;

    do{
	  if( src1[i] == src2[i] )
             i++;
	  else
	     return FAIL;

    }while( (src1[i] || src2[i]) != '\0'); 
     
    return SUCCESS; 
}



