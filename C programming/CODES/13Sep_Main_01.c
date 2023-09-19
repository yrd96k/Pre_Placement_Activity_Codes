
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

// error will occur as global static variable of helper 01 is acessed here which is not allowed
