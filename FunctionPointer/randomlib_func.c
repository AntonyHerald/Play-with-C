#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    // This program will create same sequence of
    // random numbers on every program run
    
    time_t seconds;
    seconds = time(NULL);
    srand(1);

    for(int i = 0; i<5; i++)
        printf(" %d ", (rand())); printf("\n");
   
    for(int i = 0; i<5; i++)
        printf(" %d ", (rand()%1)); printf("\n");

    for(int i = 0; i<5; i++)
        printf(" %d ", (rand()%2)); printf("\n");

    for(int i = 0; i<5; i++)
        printf(" %d ", (rand()%3)); printf("\n");

    for(int i = 0; i<5; i++)
        printf(" %d ", (rand()%4)); printf("\n");

    for(int i = 0; i<5; i++)
        printf(" %d ", (rand()%5)); printf("\n");
    return 0;
}
