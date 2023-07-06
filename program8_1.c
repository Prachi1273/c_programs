#include<stdio.h>

void Number(int iNo1)
{
  if(iNo1<50)
  {
    printf("small\n");
  }
  else if(iNo1>50 && iNo1<100)
  {
    printf("Medium\n");
  }
  if(iNo1>100)
  {
    printf("large\n");
  }
}

int main()
{
   int iValue1=0;
   
   printf("Enter number :");
   scanf("%d",&iValue1);
   
  Number(iValue1);
   
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program8_1exe
Enter number :45
small
prachi@Prachi:~/LBHW$ ./program8_1exe
Enter number :66
Medium
prachi@Prachi:~/LBHW$ ./program8_1exe
Enter number :800
large

*/
