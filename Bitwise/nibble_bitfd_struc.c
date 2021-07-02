/* 
 * This program demonstrates the use of  bitfield within struct;
 */


#include<stdio.h>

struct byte_nibbles
  {
  unsigned char b1: 4;
  unsigned char b2: 4;
  unsigned char b3: 4;
  unsigned char b4: 4;
  unsigned char b5: 4;
  unsigned char b6: 4;
  unsigned char b7: 4;
  unsigned char b8: 4;
  };

union
  {
  unsigned long var;
  struct byte_nibbles b;
  }u;

int main (void)
{
   u.b.b1=0x01; u.b.b2=0x02; u.b.b3=0x03; u.b.b4=0x04;
   u.b.b5=0x05; u.b.b6=0x06; u.b.b7=0x07; u.b.b8=0x08;

   printf("\n-----------\n");
   printf("0x%x",u.b.b1);
   printf("%x",u.b.b2);
   printf("%x",u.b.b3);
   printf("%x",u.b.b4);
   printf("%x",u.b.b5);
   printf("%x",u.b.b6);
   printf("%x",u.b.b7);
   printf("%x",u.b.b8);
   printf("\n-----------\n");

   return 0;

}
