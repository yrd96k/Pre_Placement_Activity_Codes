#include<stdio.h>

int main()
{

   int i = 1;
   int count = 0;
   
   printf("Enter the number: \n");
   scanf("%d", &count);
   
   // jo paryant i chi value 5  or 5 paksha lahan ahe to  paryant print krya ani print zalya vr i++ kraa 
   
    do 
   {
        printf("Jay Ganesh... \n");
        i++;
   }while(i<=count);

    return 0;
}