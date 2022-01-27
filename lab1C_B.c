#include <stdio.h>

int main()
{
    int LeapYear;
    int number;
    printf("Enter a year: ");
    scanf("%d", &number);

    if  (number < 1752) {
        LeapYear = 0;
        printf("%d it is not a leap year", number);
    }
   
   else if (number % 400 == 0 ) {
        LeapYear = 1;
        printf("%d is a leap year.", number);
   }
   else if (number % 100 == 0) {
       LeapYear = 0;
       printf("%d it is not a leap year", number);
   }
   else if (number % 4 == 0) {
       LeapYear = 1;
       printf("%d is a leap year.", number);
}