#include <stdio.h>


// The function operations has been modified to accept four integers and return the values using pointers (int *Not, int *Yf, int *Yesf, int *Djs).

//The function call operations(a); has been updated to operations(a, b, c, d, &Not, &Yf, &Yesf, &Djs); to pass all four variables and receive the computed values.

//printf statements in main have been updated to print the correct variables (Not, Yf, Yesf, Djs).

// * operator is use to pass all value to specific variable


void operations(int No1, int No2, int No3, int No4, int *Not, int *Yf, int *Yesf, int *Djs)
{
    *Not = No1++; 
    *Yf = ++No2;
    *Yesf = No3--;
    *Djs = --No4;
}

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;

    int Not = 0;
    int Yf = 0;
    int Yesf = 0;
    int Djs = 0;

    operations(a, b, c, d, &Not, &Yf, &Yesf, &Djs); // all value are  pass as parameter to operation functions

    printf("Not: %d\n", Not);
    printf("Yf: %d\n", Yf);
    printf("Yesf: %d\n", Yesf);
    printf("Djs: %d\n", Djs);

    return 0;
}
