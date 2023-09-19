#include<stdio.h>

int main()
{
    int i = 0;
    signed int j = 20;
    signed int k = -23;

    unsigned int a =  40;
    // unsigned int b = -20;
    

    int x = 10;                     // 4 byte
    short int y = 10; //-8          // 2 byte
    long int z = 20;  //15          // 8 byte 

    printf("%d \n",i);
    printf("%d \n",k);
    printf("%d \n",j);
    printf("%d \n",a);


    printf("%d \n",sizeof(x));
    printf("%d \n",sizeof(y));
    printf("%d \n", sizeof(20));
    


    return 0;
}