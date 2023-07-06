#include<stdio.h>

int CountEvenDigit(int iNo)
{
  int iDigit = 0,iCntEven = 0;
  
  while(iNo != 0)
  {
      if(iNo<0)
      {
        iNo = -iNo;
      }
      iDigit = iNo % 10;  
      if(iDigit%2 != 0)
      {
         iCntEven++;
      }
      iNo = iNo /10;  
  }    
  return iCntEven;  
}

int main()
{
   int iValue =0,iRet =0;
   
   printf("Enter number :\n");
   scanf("%d",&iValue);
   
   iRet = CountEvenDigit(iValue);
   
   printf("Number of digits are : %d\n",iRet);
   
   return 0;
}

/*
result :

prachi@Prachi:~/LBHW$ ./program13_2exe
Enter number :
2468
Number of digits are : 0
prachi@Prachi:~/LBHW$ ./program13_2exe
Enter number :
13542
Number of digits are : 3
prachi@Prachi:~/LBHW$ ./program13_2exe
Enter number :
7869
Number of digits are : 2
prachi@Prachi:~/LBHW$ ./program13_2exe
Enter number :
-9789
Number of digits are : 3


*/
