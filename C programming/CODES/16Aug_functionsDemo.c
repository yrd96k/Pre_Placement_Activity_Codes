#include<stdio.h>


int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return (Ans);

}

int main()
{
   int Value1 = 0;
   int Value2 = 0;
   int Ret = 0;
    
    printf("Enter the first number:\n");
    scanf("%d,&Value1");

    printf("Enter the Second number: \n");
    scanf("%d,&Value2");

    Ret = Addition(Value1,Value2);
    printf("Addtion of Numbers is : %d \n", Ret);

    return 0;
}