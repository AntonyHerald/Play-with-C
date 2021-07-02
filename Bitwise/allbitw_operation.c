#include <stdio.h>

int main(){

   unsigned int a = 60; //60 = 0011 1100
   unsigned int b = 13; //60 = 0000 1101 
   unsigned int c;	

   printf("Initial value of a=60 and b=13\n");
   printf("------------------------------\n");


   c = a & b;       /* 12 = 0000 1100 */
   printf("Line 1 - AND Value of c is %d\n", c );

   c = a | b;       /* 61 = 0011 1101 */
   printf("Line 2 - OR Value of c is %d\n", c );

   c = a ^ b;       /* 49 = 0011 0001 */
   printf("Line 3 - XOR Value of c is %d\n", c );

   c = ~a;          /*-61 = 1100 0011 */
   printf("Line 4 - COMPLI Value of c is %d\n", c );

   c = a << 2;     /* 240 = 1111 0000 */
   printf("Line 5 - (Left -shift operator (<<)) Value of c is %d\n", c );

   c = a >> 2;     /* 15 = 0000 1111 */
   printf("Line 6 - (Right-shift operator (>>)) Value of c is %d\n", c );
}
