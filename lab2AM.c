#include <stdio.h>
#include <math.h>

long Factorial(long num);
int IsPalidrome(long value);
int HighestBitSet(int value);
void ReverseIt(void);
void ReverseItAgain(void);
void ReverseItAgain(void);




int main(void)
{

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
   long n = value;
   long x = 0;
   long res = 0;
   while(n !=0)
   {
       res *= 10;
       x = n%10;
       res += x; 
       n /= 10;
   }
   return res == value;
}
}

int HighestBitSet(int value)
{
	int n = 0;
	while (pow((double) 2, (double) n) <= value) 
	{
		n++; 
	}
	(int) --n; 
	
	int x = value;
	int binary[n]; 
	for(int x = 0; x>0; x++) 
	{
		binary[x] = x % 2;
		x /= 2;
	}
	printf("Value: %d  in binary: ", value); 
	for(int x = n; x>=0; --x) 
	{
		printf("%d", binary[x]);
	}
	printf(" Highest Bit: %d\n\n", n); 
	return n;
}

void ReverseIt(void)
{
        float arr[5];
        int num; 
        FILE *fptr;  
        fptr = fopen("lab2ReverseIt.txt", "w"); 
        if (fptr == NULL) 
        {
    printf("Failed to create the file.\n");  
        }
        printf("Enter number:\n");
        
        for(num=0; num <5; num++){
                scanf("%f",&arr[num]); 
                fprintf(fptr,"%f ",arr[num]);  
        }
        printf("Reversed number\n");
        
        for(num=4; num>=0;num--){
                printf("%f ",arr[num]); 
                fprintf(fptr,"%f ",arr[num]);  

        }
        printf("\nData saved\n");
        fclose(fptr);
}

void ReverseItAgain(void)
{
        float num;   
        FILE *fptr; 
        fptr = fopen("mm.txt", "r"); 
    printf("\nReading the Data :\n");
        while(!feof(fptr))
    {    
      fscanf(fptr,"%f",&num);
      printf("%f\n",num);      
    }
        fclose(fptr); 
}

void ReverseItAgain(void)
{
        int x,y,z; 
        for (x = 1; x <= lines; ++x, y = 0)  
        {
      for (z = 1; z <= lines - x; ++z)  
          {
         printf("  ");
      }
      while (y != 2 * x - 1) 
          {
         printf("* ");
         ++y;
      }
      printf("\n"); 
   }

}