#include <stdio.h>

long Factorial(long num);
int IsPalindrome(long value);

int main(void)
{
    printf("%ld",Factorial());
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

    long n = value, rev = 0, remainder;
    
    while (n != 0) 
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;

    }

    if (value == rev)
    {
        return 1;
    }

    else return 0;
    
    printf("Reversed number: %d", rev(0));
    return 0;
 }




int HighestBitSet(int value );
{
  int n, bin;

  printf("Enter a decimal number: ");
  scanf("%d", &n);
  
  bin = convert(n);
  printf("%d in decimal =  %lld in binary", n, bin);
  printf("  5%d in decimal", n);
  
  return 0;
}

long long convert(int n) {
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
        FILE *fptr;  //declaring the file pointer
        fptr = fopen("Hello.txt", "w"); //intializing the file pointer creating a file
        if (fptr == NULL) //checking whether file created or not
        {
    printf("Failed to create the file.\n");  
        }
        printf("Enter 5 Floating point numbers :\n");
        
        for(num=0; num <5; num++){
                scanf("%f",&arr[num]); // reading 5 floating point numbers
                fprintf(fptr,"%f ",arr[num]);  //writing the input into file
        }
        printf("Floating point numbers in reverse order\n");
        
        for(i=4;i>=0;num--){
                printf("%f ",arr[num]); //printing the input in reverse order
                fprintf(fptr,"%f ",arr[num]);  // writing the input in reverse order

        }
        printf("\nData successfully entered into file\n");
        fclose(fptr); // closing file pointer
}
void ReverseItAgain( void )
{
        float num;   // declaring the varibles
        FILE *fptr; //declaring the file pointer
        fptr = fopen("Hello.txt", "r"); //intializing the filepointer reading a existed file
    printf("\nReading the Data from file:\n");
        while(!feof(fptr))
    {    
      fscanf(fptr,"%f",&num);//reading the data from file and printing
      printf("%f\n",num);      
    }
        fclose(fptr); // closing file pointer
}

void Pyramid( int lines )
{
        int i,k,s; // declaring the varibles
        for (i = 1; i <= lines; ++i, k = 0)  //outer loop for number of rows 
        {
      for (s = 1; s <= lines - i; ++s) //loop to print spaces 
          {
         printf("  ");
      }
      while (k != 2 * i - 1) // loop to print pattern 
          {
         printf("* ");
         ++k;
      }
      printf("\n"); //print next line everytime
   }

}










