#include<stdio.h>

void Display(int iNo1)
{
  int i=0;
  
  for(i=-iNo1;i<=iNo1;i++)
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
   
prachi@Prachi:~/LBHW$ ./program7_3exe
Enter number :4
-4	-3	-2	-1	0	1	2	3	4prachi@Prachi:~/LBHW$ 


*/
