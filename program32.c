// sum non factors 

#include<stdio.h>

int SumNonFactors(int iNo)
{
   int iCnt = 0;
   int iSum = 0;
   for(iCnt = 1; iCnt<iNo; iCnt++ )
   {
      if((iNo % iCnt)!= 0)
      {
          iSum = iSum+iCnt;
      }
   }
   return iSum;
}

int main()
{
  int iValue = 0;
  int iret= 0;
  
  printf("Enter the number :");
  scanf("%d",&iValue);
  
  iret = SumNonFactors(iValue);
  
  printf("Summation of non factors is %d",iret);
  
  return 0;
}
