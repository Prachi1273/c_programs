#include<stdio.h>

void OddDisplay(int iNo1)
{
  int i=0;
  
  for(i=1;i<=iNo1;i++)
  {
    if((i%2)!=0)
    {
    printf("%d\t",i);
    }
  }
}

int main()
{
   int iValue1=0;
   
   printf("Enter number :");
   scanf("%d",&iValue1);
   
   OddDisplay(iValue1);
   
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program7_4exe
Enter number :18
1	3	5	7	9	11	13	15	17	


*/
