#include <stdio.h>
#include <math.h>


long Factorial(long num)   //long factorial function
 {
    long facNum = 1;
    while(num != 0)
    {
        facNum *= num;
        num--;
    }

    printf("%ld\n",facNum);
	
return 0;
}

int IsPalidrome(long value)
{
   long reversed = 0, remainder, value2 = value;
   while(value2 !=0)
   {
       remainder = value2%10;
       reversed = reversed*10 + remainder;
       value2 /= 10; 
   }
   if(value == reversed){
	   printf("Is pali\n");
	   return 1;
   }
   else{
	   printf("Not pali\n");
	   return 0;
   }
return 0;
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
	printf(" Highest Bit Set of number: %d\n\n", n); 

//--------------------------------------------------------
	int c, k;
	printf("Value in binary: ");
	for (c= 31; c>= 0; c--){
		k = value >> c;
		if (k & 1){
			printf("1");
		}
		else{
			printf("0");
		}
	}
	printf("\n");
return 0;
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
        printf("Enter 5 Floating point numbers :\n");
        
        for(num=0; num <5; num++){
                scanf("%f",&arr[num]); 
        }
        printf("Floating point numbers in reverse order\n");
        
        for(num=4; num>=0;num--){
                printf("%f ",arr[num]); 
                fprintf(fptr,"%f ",arr[num]);  

        }
        printf("\nData successfully entered into file\n");
        fclose(fptr);
}

void ReverseItAgain(void)
{
        float num;   
        FILE *fptr; 
        fptr = fopen("lab2ReverseIt.txt", "r"); 
    printf("\nReading the Data from file:\n");
        while(!feof(fptr))
    {    
      fscanf(fptr,"%f",&num);
      printf("%f\n",num);      
    }
        fclose(fptr); 
}

int Pyramid(int lines)
{
	FILE *pyr;
	pyr = fopen("Pyramid.txt" , "w");
	int row, space, symbol;
	for(row =1; row <= lines; row++){
		for(space = 1; space <= (lines-row); space++){
			printf(" ");
			fprintf(pyr, " ");
		}
		for(symbol = 1; symbol <= ((2*row)-1); symbol++){
			printf("*");
			fprintf(pyr, "*");
		}
	printf("\n");
	fprintf(pyr, "\n");
	}
}

int main(){
	  printf("Enter a number(that is less than 13): ");
  int whatever;
  scanf("%i", &whatever);
  Factorial(whatever);
  printf("\n");
  //--------------------------------------------
  printf("Enter a number:");
  long whatever1;
  scanf("%ld", &whatever1);
  IsPalidrome(whatever1);
  printf("\n");
  
  //-----------------------------------------
  printf("Enter a number: "); 
  int whatever2;
  scanf("%i", &whatever2);
  HighestBitSet(whatever2);
  printf("\n");
  
  //------------------------------------------
  ReverseIt(); 
  printf("\n");
  
  //------------------------------------------
  ReverseItAgain(); 
  printf("\n");
 
  
  //-----------------------------------------
  printf("Enter a number: ");
  int w;
  scanf("%u" , &w);
  Pyramid(w);
  
  
}
