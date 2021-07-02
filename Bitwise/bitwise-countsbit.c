#include <stdio.h>

int main(){

  unsigned int val=0x12345678, count=0, i; 

  for(i=0; i<32;i++)
  {
	  // if((val >> i)&0x1);
	  if((val >> i));
	  count++;
  }
  printf("count %d \n", count);

}

