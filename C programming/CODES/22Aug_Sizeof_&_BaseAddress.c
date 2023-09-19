#include<stdio.h>

int main()
{
  char ch = 'A';
  int i = 23;
  float f = 12.31f;
  double d = 89.65;


  printf("Size of Character is %d bytes \n",sizeof(ch)); // 1
  printf("Size of integer is %d bytes \n",sizeof(i));   // 4
  printf("Size of float is %d bytes \n",sizeof(f));    // 4
  printf("Size of double is %d bytes \n",sizeof(d));  // 8


   printf("Base address of character is  %d bytes \n",&ch);
   printf("Base address of Integer is   %d bytes\n",&i);
    printf("Base address of float is %d bytes \n",&f);
    printf("Base address of double is %d bytes \n",&d);

    return 0; 
   
}