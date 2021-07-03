/* Demonstrate the use of nested comments */

/* Because C’s comments start and end with specific characters, 
 * you cannot put one comment inside another. This is known as nesting. 
 * Nested comments can cause errors in your code, so while you’re programming, 
 * keep track of where comments start and end. 
 */

#include <stdio.h>

int main()
{
   const char ch[] = "HelloWorld";
/* 
    /* 
     * This is nested comments
     */
*/

   printf("The Const Char %s \n", ch);
   return 0; 
}


