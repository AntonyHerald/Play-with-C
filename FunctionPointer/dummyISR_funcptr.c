#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

typedef struct{
     char int_name[5];
     int (*isr)();
}isr_t;		

int isr_keyboard_interrupt()
{
	printf("keyboard Interrupt \n");
	return 0;
}
int isr_mouse_interrupt()
{
	printf("mouse Interrupt \n");
	return 0;
}
int isr_rtc_interrupt()
{
	printf("keyboard Interrupt \n");
	return 0;
}
int isr_i2c_interrupt()
{
	printf("keyboard Interrupt \n");
	return 0;
}
int isr_usb_interrupt()
{
	printf("keyboard Interrupt \n");
	return 0;
}

isr_t ivt[] =
{
   {"isr0", isr_keyboard_interrupt};
   {"isr1", isr_mouse_interrupt};
   {"isr2", isr_rtc_interrupt};
   {"isr3", Isr_i2c_interrupt};
   {"isr4", isr_usb_interrupt};
};

//how to call or access
//(ivt[2].isr)(); 

int main(){

	while(1){
		//(ivt[rand()%5].isr)();  //call function points here
		(ivt[2].isr)();
		sleep(5);
		}
return 0;
}



