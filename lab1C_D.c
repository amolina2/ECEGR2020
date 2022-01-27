#include <stdio.h>

int main()
{
    long n, rev = 0, remainder;
    printf("Enter an number: ");
    scanf("%d", &n);
    
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    
    printf("Reversed number: %d", rev);
    return 0;
}

