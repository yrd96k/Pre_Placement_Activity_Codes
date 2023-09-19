#include<stdio.h>

int main()
{ 
   int no = 21;
   int *P = &no;
   int *a = &no;
   int **q = &P;
   int **b = &P;
   int ***r = &q;
   int ****x = *&r;
   int *****y = &x;
   
    return 0;

}