#include <stdio.h>

long Factorial(long num);
int IsPalindrome(long value);

int main(void)
{
    printf("%ld",Factorial(10));
    printf("%ld",IsPalidrome());
    printf("%ld",ReverseIt());

    return 0;
}

long Factorial(long num)
 {
    int number;
    printf("Enter an number: ");
    scanf("%d", &number);

    long facNum = 1;

    while(number != 0)
    {
        facNum *= number;
        number--;
    }

    return facNum;
    
}

int IsPalidrome(long value)

 {

    int value;
    printf("Enter an number: ");
    scanf("%d", &value);

    long  rev = 0, remainder;
    
    while (value != 0) 
    {
        remainder = value % 10;
        rev = rev * 10 + remainder;
        n /= 10;

    }

    if (value == rev)
    {
        return 1;
    }

    else return 0;
    
    printf("Reversed number: %d", rev);
    return 0;
 }




int HighestBitSet(int value )
{
  int n, bin;

  printf("Enter a decimal number: ");
  scanf("%d", &n);
  
  bin = convert(n);
  printf("%d in decimal =  %lld in binary", n, bin);
  printf("  5%d in decimal", n);
  
  return 0;
}

long long convert(n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}


void ReverseIt(void)
{
        float arr[5];
        int num; 
        FILE *fptr;  
        fptr = fopen("Hello.txt", "w"); 
        if (fptr == NULL) 
        {
    printf("Failed to create the file.\n");  
        }
        printf("Enter 5 Floating point numbers :\n");
        
        for(num=0; num <5; num++){
                scanf("%f",&arr[num]); 
                fprintf(fptr,"%f ",arr[num]);  
        }
        printf("Floating point numbers in reverse order\n");
        
        for(num=4; num>=0;num--){
                printf("%f ",arr[num]); 
                fprintf(fptr,"%f ",arr[num]);  

        }
        printf("\nData successfully entered into file\n");
        fclose(fptr);
}
void ReverseItAgain( void )
{
        float num;   
        FILE *fptr; 
        fptr = fopen("mm.txt", "r"); 
    printf("\nReading the Data from file:\n");
        while(!feof(fptr))
    {    
      fscanf(fptr,"%f",&num);
      printf("%f\n",num);      
    }
        fclose(fptr); 
}

void Pyramid( int lines )
{
        int i,k,s; 
        for (i = 1; i <= lines; ++i, k = 0)  
        {
      for (s = 1; s <= lines - i; ++s)  
          {
         printf("  ");
      }
      while (k != 2 * i - 1) 
          {
         printf("* ");
         ++k;
      }
      printf("\n"); 
   }

}