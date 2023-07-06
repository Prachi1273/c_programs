//Factors(time complexity)

#include<stdio.h>

int SumFactors(int iValue)
{
   int iCnt = 0;

   int iSum = 0;
   
   //O(N/2)  order of N/2
   for(iCnt = 1; iCnt <= (iValue/2); iCnt++)
   {
      if((iValue % iCnt)==0)
      {
        iSum = iSum + iCnt;
      }
   }
   return iSum;
}   

int main()
{
   int iNo = 0,iRet = 0;
   
   printf("Enter value :\n");
   scanf("%d",&iNo);
   
  iRet = SumFactors(iNo);
  printf("Summation of factors : %d\n",iRet);
   
   return 0;
}
