#include <stdio.h>

int main()
{
  int a = 10;
  int b = 10;
  int c = 10;
  int d = 10;

  a++; // 0nly increment takes place as it is not assigned to any other variable. 
  ++b; // only increment takes place as it is not assigned to any other variable. 
  c--; // only increment takes place as it is not assigned to any other variable.
  --d; // only increment takes place as it is not assigned to any other variable. 

  printf("the value of a++ is %d \n", a);
  printf("the value of ++b is %d \n", b);
  printf("the value of c-- is %d \n ",c);
  printf("the value of --d is %d \n",d);  
  return 0;
}


  //printf("the value of a++ is %d \n", a++); so basically 1st the a value is assigned to %d then increment so, no fayda
  //printf("the value of ++b is %d \n", ++b); so here 1st the value is increment and then assigned to %d
  //printf("the value of c-- is %d \n ",c--); so here 1st the value is assigned to %d then decrement so, no fayda
  //printf("the value of --d is %d \n",--d); so here 1st the value is decrement then assigned to %d