/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int LeapYear;
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number < 1752) {
        LeapYear = 0;
    }
   
   else if (number % 400 == 0 ) {
        LeapYear = 1;
   }
   else if (number % 100 == 0) {
       LeapYear = 0;
   }
   else if (number % 4 == 0) {
       LeapYear = 1;
   }
  
   printf("%d\n", LeapYear);

}

/* 
{
        int LeapYear;
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number < 1752) {
        LeapYear = 0;
        printf("%d is not a leap year.", number);
    }
   
   else if (number % 400 == 0 ) {
        LeapYear = 1;
        printf("%d is a leap year.", number);
   }
   else if (number % 100 == 0) {
       LeapYear = 0;
       printf("%d is not a leap year.", number);
   }
   else if (number % 4 == 0) {
       LeapYear = 1;
       printf("%d is a leap year.", number);
   }
   */

  