/*
 * This program explained the use of function pointer assigned used 
 * across multiple function and used within structure object 
 */


#include <stdio.h>


/*function pointer prototype declaration */
typedef int (*Operation)(int , int);

/*func pointer used inside a struct object */
typedef struct myData{
	int result;
	Operation opt;
}DATA;


/* Addition */
int add(int n, int m)
{
	return ( (n+m) );
}

/* Substration */
int subtraction(int n, int m)
{
	return ( (n-m) );
}

/* Multiplication */
int multiply(int n, int m)
{
	return ( (n * m) );
}


int main()
{
    DATA dataObj;

    /* assigned add function to the struct func object */
    dataObj.opt = add;
    dataObj.result = dataObj.opt(40, 20);
    printf("The Added value = %d \n", dataObj.result);


    /* assigned subtraction function to the struct func object */
    dataObj.opt = subtraction;
    dataObj.result = dataObj.opt(40, 20);
    printf("The Substraced value = %d \n", dataObj.result);


    /* assigned multiply function to the struct func object */
    dataObj.opt = multiply;
    dataObj.result = dataObj.opt(40, 20);
    printf("The Multiplied value = %d \n", dataObj.result);

  return 0;
}
