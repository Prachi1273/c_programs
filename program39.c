//sum of digits 
#include<stdio.h>

int SumDigits(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;
   int iSum=0;
   
   if(iNo < 0)  // because for negative number addition to get positive
   {
   iNo= -iNo;
   }
   
   while(iNo!=0)  //or  if(ino == 0){return 1} if(ino < 0){ino= -ino} while(ino > 0)   
   {
      iDigit = iNo%10;
      iSum=iDigit+iSum;
      iNo=iNo/10;
   }
   
   return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iRet = SumDigits(iValue);
    
    printf("Summation of digits is : %d\n",iRet);
    
    return 0;
}
