/* C program to set, clear and toggle a bit
 *
 *  SET    a bit means that if K-th bit is 0, then set    it to 1 and if it is 1 then leave it unchanged.
    CLEAR  a bit means that if K-th bit is 1, then clear  it to 0 and if it is 0 then leave it unchanged.
    TOGGLE a bit means that if K-th bit is 1, then change it to 0 and if it is 0 then change it to 1.
*/
#include <stdio.h>
#include <stdlib.h>

/* macro for bitwise modification */
#define 	SETBIT(n, k)	 (n | (1 << (k - 1))) 
#define 	CLRBIT(n, k)     (n & (~(1 << (k - 1))))
#define		TGLBIT(n, k)	 (n ^ (1 << (k - 1)))

#if 0
/* The below function representation is same as above macro */

// Function to set the kth bit of n
int SETBIT(int n, int k)
{
    return (n | (1 << (k - 1)));
}
  
// Function to clear the kth bit of n
int CLRBIT(int n, int k)
{
    return (n & (~(1 << (k - 1))));
}
  
// Function to toggle the kth bit of n
int TGLBIT(int n, int k)
{
    return (n ^ (1 << (k - 1)));
}
#endif

/* Display func in addition will display integet to binary value for clear understanding */
void display(unsigned int n)
{
      if (n > 1)
        display(n/2);

      printf("%d", n % 2);
}


// Main code 
int main()
{
    int n = 10, k = 1;
    int sbit, cbit, tbit;

    system("clear");

    display(n);  //display binary value before Set bit
    sbit = SETBIT(n, k); 
    printf(" Value = %d with %d-th bit     Set: %d  ", n, k, sbit);
    display(sbit);  //display binary value after set bit
    printf("\n"); 

    display(n);  //display binary value before Set bit
    cbit = CLRBIT(n, k);
    printf(" value = %d with %d-th bit Cleared: %d  ", n, k, cbit);
    display(cbit); //display binary value after set bit
    printf("\n");

    display(n);    //display binary value before Set bit
    tbit = TGLBIT(n, k);
    printf(" VALUE = %d with %d-th bit Toggled: %d  ", n, k, tbit);
    display(tbit);  //display binary value after set bit
    printf("\n");

    return 0;
}
