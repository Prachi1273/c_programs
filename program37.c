//  even factors 

#include<stdio.h>

void EvenFactor(int iValue)
{
   int iCnt = 0;
   for(iCnt = 2; iCnt<= (iValue/2); iCnt=iCnt+2)
   {
     if((iValue % iCnt )== 0) 
     {
          printf("%d\n",iCnt);
     }
   }
}

void OddFactor(int iValue1)
{
   int iCnt = 0;
   for(iCnt = 1; iCnt<= (iValue1/2); iCnt=iCnt+2)
   {
     if((iValue % iCnt )!= 0) 
     {
          printf("%d\n",iCnt);
     }
   }
}

int main()
{
   int iNo = 0;
   int iNo1 =0;
   
   printf("Enter number:");
   scanf("%d",&iNo);
   
   EvenFactor(iNo);
   OddFactor(iNo1);
   
   return 0;
}
