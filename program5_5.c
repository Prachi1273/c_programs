#include<stdio.h>

int SumNonFactors(int iValue)
{
  int iCnt=0,iSumNF=0;
  for(iCnt=1;iCnt<iValue;iCnt++)
  {
     if((iValue%iCnt)!=0)
     {
       iSumNF=iSumNF+iCnt;
     }
  }
  return iSumNF;
}
int SumFactors(int iValue)
{
  int iCnt=0,iSumF=0;
  for(iCnt=1;iCnt<iValue;iCnt++)
  {
     if((iValue%iCnt)==0)
     {
       iSumF=iSumF+iCnt;
     }
  }
  return iSumF;
}
 int Diffrence(int iNo)
 {
   int FactSum=0;
   int NonFactSum=0;
   int iDiff=1;
   
   FactSum=SumFactors(iNo);
   NonFactSum=SumNonFactors(iNo);
   
  iDiff=FactSum-NonFactSum;
  
  return iDiff;
 }

int main()
{
  int iNo=0,iRet=0;
  
  printf("Enter number : ");
  scanf("%d",&iNo);
  
  iRet=Diffrence(iNo);
  
  printf("Diffrence between NonFactors and Factors is : %d\n",iRet);
  
  return 0;
}

/*
  result 
prachi@Prachi:~/LBHW$ ./program4_5exe
Enter number : 12
Diffrence between NonFactors and Factors is : -34
prachi@Prachi:~/LBHW$ ./program4_5exe
Enter number : 10
Diffrence between NonFactors and Factors is : -29
prachi@Prachi:~/LBHW$ 


*/
