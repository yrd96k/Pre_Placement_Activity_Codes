// Header file for printf and scanf function

#include<stdio.h>

// Entry Point function from where execution starts

int main() 
{
  int Value1 = 1;
  int Value2 = 141;

  // Ans = 0, clean the variable or container, may contain some garbage value
  
  int Ans = 0;  

  Ans = Value1 + Value2;
  printf("%d",Ans);

  // %d format specifier 
  // %f  = float and double
  // %c = char

return 0; // Return 0 to os which indicates success

}

