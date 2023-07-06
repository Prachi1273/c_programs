#include<stdio.h>

int SumNonFactors(int iValue)
{
  int iCnt=0,iSum=0;
  for(iCnt=1;iCnt<iValue;iCnt++)
  {
     if((iValue%iCnt)!=0)
     {
       iSum=iSum+iCnt;
     }
  }
  return iSum;
}

int main()
{
  int iNo=0,iRet=0;
  
  printf("Enter number : ");
  scanf("%d",&iNo);
  
  iRet=SumNonFactors(iNo);
  
  printf("Summation of NonFactors is : %d\n",iRet);
  
  return 0;
}

/*
  result 
prachi@Prachi:~/LBHW$ ./program4_4exe
Enter number : 12
Summation of NonFactors is : 50
prachi@Prachi:~/LBHW$ ./program4_4exe
Enter number : 10
Summation of NonFactors is : 37

*/
