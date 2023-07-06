//check perfect

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iValue)
{
   int iCnt = 0,iSum = 0;
   
   //O(N/2)  order of N/2
   for(iCnt = 1; iCnt <= (iValue/2); iCnt++)
   {
      if((iValue % iCnt)==0)
      {
        iSum = iSum + iCnt;
      }
   }
    if(iSum == iValue)
   {
     return true;
   }
   else 
   {
   return false;
   }
}  

int main()
{
   int iNo = 0;
   bool bRet = false;
   
   printf("Enter value :\n");
   scanf("%d",&iNo);
  
  bRet = CheckPerfect(iNo);
  
  if(bRet == true)
   {
      printf("%d Number is perfect\n",iNo);
   }
   else
   {
      printf("%d Number is NOT perfect\n",iNo);
   }
   
   
   return 0;
}
