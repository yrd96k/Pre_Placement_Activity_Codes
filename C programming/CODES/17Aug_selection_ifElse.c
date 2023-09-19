 #include<stdio.h>

int main()
{
  int No = 0;
  int Ans = 0;

  printf("Enter the Number : \n");
  scanf("%d", &No);

  Ans = No % 2;   // Mod Operator ( Remainder) %
  if ( Ans == 0)  // Jar ( == comparison operator)
  {
    printf("Number is Even \n");
  }
  else  // Nasel Tar
  {
    printf ("Number is Odd\n ");
  }
  return 0;
}

// gcc 17Aug_selection_ifElse.c -o my.exe
// my.exe