#include<stdio.h>

int main()
{
  int standard = 0;
  printf("Primary School Portal \n ");

  printf("Enter your Division : \n");
  scanf("%d", &standard);

  if( standard == 1)
  {
    printf(" Your Exam is at 1 Pm \n");
    
  }
  else if(standard == 2)
  {
    printf("Your Exam is at 2 Pm \n");

  }
  else if( standard == 3)
  {
    printf("Your exam is at 3 Pm \n");
  }
  else
  {
    printf("invalid standard \n");
  }

    return 0 ;
}



