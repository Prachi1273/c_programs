#include<stdio.h>

int CountDigit(int iNo)
{
  int iDigit = 0,iCnt = 0;
  
  while(iNo != 0)
  {
      iDigit = iNo % 10;  
      if(iDigit < 6)
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

prachi@Prachi:~/LBHW$ gcc program12_5.c -o program12_5exe
prachi@Prachi:~/LBHW$ ./program12_5exe
Enter number :
5478
Number of digits are : 2
prachi@Prachi:~/LBHW$ ./program12_5exe
Enter number :
6543
Number of digits are : 3
prachi@Prachi:~/LBHW$ ./program12_5exe
Enter number :
7896
Number of digits are : 0

*/
