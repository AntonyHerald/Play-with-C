/* 
 *  -- This program is very clear to understand --
 * Bit wise AND & is used for masking for "set specific bit position(s) to zero(s)"
 * write a program to take a number, now extract its first five bit from LSB and 
 * make all the other remaing eleven bits as zeros.
 *
*/

#include<stdio.h>

int  main()
{ 
	int a;
	scanf("%X",&a); // let  a= 5a97 in hexadecimal i.e. [ 5= 101, a=1010, 9= 1001, 7=111]
	printf("\n Given number %x",a);

	// now extract first five bits from LSB
	// so form a number having five one's i.e. 1 1111 => 31 in decimal
	// take new variable mask and assign 31 to it;
	
	int mask=31, newNumber; 
	
	// here newNumber will hold the newValuer formed by ANDing a, mask
	newNumber = (a & mask);

//Step1:            a= 	0101  1010  1001  0111
//Step2: 	 mask=	0000  0000  0001  1111		[eleven 0s + five 1s= 16 bit format]
//-------------------------------------------------------------------------------------------------------------------------   
//Step3:    newNumber=	0000  0000  0001  0111		[Bitwise ANDing i.e. newNumber= a & mask]  
//-------------------------------------------------------------------------------------------------------------------------  
//Spet4:    newNumber=  0    0     1     7

	printf(" \n New Number = %d in hex =Ox%X",newNumber,newNumber);
	return 0;
}
