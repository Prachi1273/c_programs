#include<stdio.h>

void Display(int iNo1)
{
  int i=0;
  
  for(i=1;i<=iNo1;i++)
  {
    printf("%d\t",i);
  }
}

int main()
{
   int iValue1=0;
   
   printf("Enter number :");
   scanf("%d",&iValue1);
   
   Display(iValue1);
   
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program7_2exe
Enter number :8
1	2	3	4	5	6	7	8	prachi@Prachi:~/LBHW$ 


*/
