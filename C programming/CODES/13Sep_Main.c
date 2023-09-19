#include<stdio.h>

int i;
int j = 11;
extern int no; 

int main()
{
    printf("Vallue of i: %d \n", i);
    printf("Value of j : %d\n",j);
    printf("Value of No : %d\n", no);



    return 0;
}

// gcc Main.c Helper.c -o  Myexe
// ./Myexe

// gcc Helper.c Main.c -o Myexe
// ./Myexe