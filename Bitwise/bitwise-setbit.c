/* This bitwise program is required to set a particular value to mask
 *
 * Ex. SET bit means, set a bit to 1 of 0, leave unchanged if its 1
 *
 */

#include <stdio.h>

int main(){

  /* here the pos & nbit is to set the 4th bit */
  unsigned int no =0x12345678, pos=4, nbits=4, mask, new=0xA;

  printf("0x%x\n", no);
  mask=((1 << nbits)-1);
  //no = ( no&(~(mask << pos)));  //org
  no = no & (new << pos);
  printf("AND. 0x%x\n", no);

  no = no | (new << pos);
  printf("OR. 0x%x\n", no);

  no = ( no&(~(mask << pos)));
  printf("0x%x\n", no);

  no = no | (new << pos);
  printf("0x%x\n", no);

  return 0;
}

