#include<stdio.h>

int CountDigit(int iNo)
{
  int iDigit = 0,iCnt = 0,iMult = 1;
  
  while(iNo != 0)
  {
      if(iNo<0)
      {
        iNo = -iNo;
      }
      iDigit = iNo % 10; 
      iMult = iDigit*iMult; 
      iNo = iNo /10;  
      iCnt++;
  }    
  return iMult;  
}

int main()
{
   int iValue =0,iRet =0;
   
   printf("Enter number :\n");
   scanf("%d",&iValue);
   
   iRet = CountDigit(iValue);
   
   printf("Number of digits are : %d\n",iRet);
   
   return 0;
}

/*
result :

Enter number :
1018
Number of digits are : 0
prachi@Prachi:~/LBHW$ ./program13_4exe
Enter number :
2395
Number of digits are : 270
prachi@Prachi:~/LBHW$ ./program13_4exe
Enter number :
345
Number of digits are : 60s
*/
