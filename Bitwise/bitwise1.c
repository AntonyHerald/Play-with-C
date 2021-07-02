#include<stdio.h>

int main(){

	unsigned int num = 0x12345678, pos = 4;

	printf("1. = 0x%x\n", num);

	if(num &(1<<pos))
		printf("2. = 0x%x", num &(1<<pos));
	else
		printf("0");

	printf("\n");
	num = (num | (1<<pos));
		printf("3. = 0x%x\n", num);

	num = (num&~(1<<pos));
		printf("4. = 0x%x\n", num);
}

#if 0
0x78
	0111 0000
		1
-----------------
	0111 1001
#endif
