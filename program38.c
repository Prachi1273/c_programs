//input  751, o/p  3 
//count number of digits

#include<stdio.h>

int CountDigits(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;
   
   while(iNo!=0)  //or  if(ino == 0){return 1} if(ino < 0){ino= -ino} while(ino > 0)   
   {
      iDigit = iNo%10;
      iNo=iNo/10;
      iCnt++;
   }
   
   return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iRet = CountDigits(iValue);
    
    printf("Number of digits are : %d\n",iRet);
    
    return 0;
}
