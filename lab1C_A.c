#include <stdio.h>
void SizeofVariables(void);

int main(){
 char c;  
 short s;  
 int i;  
 unsigned int ui;  
 unsigned long int ul; 
 float f;
 double d;  
 long double ld;
 void *ptr; 
 
  
  printf("Size of char data type : %d bytes \n",sizeof(char));
  printf("Size of short data type : %d bytes \n",sizeof(short));
  printf("Size of int data type : %d bytes\n",sizeof(int));
  printf("Size of unsigned int data type : %d bytes\n",sizeof(unsigned int));
  printf("Size of unsigned long int data type : %d bytes\n",sizeof(unsigned long int));
  printf("Size of float data type : %d bytes\n",sizeof(float));
  printf("Size of double data type : %d bytes\n",sizeof(double));
  printf("Size of long double data type : %d bytes\n",sizeof(long double));
  printf("Size of void data type : %d bytes\n",sizeof(void));
}
