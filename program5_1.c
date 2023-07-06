#include<stdio.h>

int FactorsMult(int iValue)
{
   int iCnt=0,Mult=1;
   for(iCnt=1; iCnt<iValue; iCnt++)
   {
     if((iValue%iCnt)==0)
     {
       Mult=Mult*iCnt;
     }
   }
   return Mult;
}

int main()
{
  int iNo=0,iRet=0;
  
  printf("Enter number : ");
  scanf("%d",&iNo);
  
  iRet=FactorsMult(iNo);
  
  printf("Multiplication of Factors is :%d",iRet);
  
  return 0;
}

/*
  result 
  
  prachi@Prachi:~/LBHW$ ./program4_1exe
Enter number : 12
Multiplication of Factors is :144prachi@Prachi:~/LBHW$ ./program4_1exe
Enter number : 13
Multiplication of Factors is :1prachi@Prachi:~/LBHW$ ./program4_1exe
Enter number : 10
Multiplication of Factors is :10
*/
