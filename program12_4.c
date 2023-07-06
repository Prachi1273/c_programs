#include<stdio.h>

int CountDigit(int iNo)
{
  int iDigit = 0,iCnt = 0;
  
  while(iNo != 0)
  {
      iDigit = iNo % 10;  
      if(iDigit ==4)
      {
         iCnt++;
      }
      iNo = iNo /10;  
  }    
  return iCnt;  
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
6875
Number of digits are : 0
prachi@Prachi:~/LBHW$ ./program12_4exe
Enter number :
6543
Number of digits are : 1
prachi@Prachi:~/LBHW$ ./program12_4exe
Enter number :
34442456
Number of digits are : 4



*/
