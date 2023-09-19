#include<stdio.h>

int main()
{
   int X = 11;

   const int Y = 11;


    X++;
    X--;
    X = 21;


    //  y ++; Not allowed
    // y --;  Not allowed
    // y = 21; Not allowed                                                        

    return 0;
}