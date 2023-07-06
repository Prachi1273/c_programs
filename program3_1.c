#include<stdio.h>

void PrintEven(int iValue)
{
   int iCnt=0;
   if(iValue<=0)
   {
     return;
   }
   for(iCnt=0;iCnt<iValue;iCnt++)
   {
     if((iCnt%2)==0)
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
