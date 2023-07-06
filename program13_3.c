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
      if((iDigit >3) && (iDigit <7))
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

prachi@Prachi:~/LBHW$ gcc program13_3.c -o program13_3exe
prachi@Prachi:~/LBHW$ ./program13_3exe
Enter number :
564
Number of digits are : 3
prachi@Prachi:~/LBHW$ ./program13_3exe
Enter number :
8973
Number of digits are : 0
prachi@Prachi:~/LBHW$ ./program13_3exe
Enter number :
-456
Number of digits are : 3
*/
