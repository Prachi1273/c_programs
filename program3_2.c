#include<stdio.h>

void PrintEven(int iValue)
{
   int iCnt=0;
   if(iValue<=0)
   {
     iValue=-iValue;
   }
   for(iCnt=1;iCnt<iValue;iCnt++)
   {
     if((iCnt%2)==0 && (iValue%iCnt)==0)
     {
      printf("%d\n",iCnt);
     }
   }
}

int main()
{
   int iNo=0;
   
   printf("Enter number :");
   scanf("%d",&iNo);
   
   PrintEven(iNo);
   
   return 0;
}

/*
  result :
  
  prachi@Prachi:~/LBHW$ ./program3_2exe
Enter number :24
2
4
6
8
12

*/
