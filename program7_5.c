#include<stdio.h>

void MultipleDisplay(int iNo1)
{
  int i=0,mult=1;
  for(i=1;i<=5;i++)
  {
     mult=iNo1*i;     
     printf("%d\t",mult);  
  }
}

int main()
{
   int iValue1=0;
   
   printf("Enter number :");
   scanf("%d",&iValue1);
   
  MultipleDisplay(iValue1);
   
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program7_5exe
Enter number :4
4	8	12	16	20	

*/
