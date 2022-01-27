/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   char c;
   int voc;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c) == 0){
         printf("%c Error", c);
    }
    else if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
		c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')  {
         /*printf("%c is an alphabet.", c);*/
		printf("\n %c is a vowel.", c);
		voc = 1;
		
	}
	else {
	    printf("\n %c is a consonant.", c);
	    voc = 0;
	}
	
		
}
