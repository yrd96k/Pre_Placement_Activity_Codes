#include<stdio.h>

// int No1, No2 are function arguments
// value1 = 10 are passing parameters

// in every function create new local variable, so here in addition function we have to 
// create int sum variable to calculate the addition of arguments no1 and no2


int Addition( int No1, int No2)
{
    int Sum = 0;
    Sum = No1 + No2;
    return Sum;  // return sum value to the main function. 

}

int main()
{
  int Value1 = 10;
  int Value2 = 50;
  int Ans = 0;
  
  Ans = Addition(Value1, Value2);
  printf("Addition is: %d\n", Ans);

  return 0;
}