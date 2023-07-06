#include<stdio.h>

void Factors(int iValue)
{
   int iCnt=1 ,rev=0, i=0;
   while( iCnt<iValue)
   {
     if((iValue%iCnt)==0)
     {
       rev=iCnt%10;
       i=i*10+rev;
       iCnt/=10;
       
       printf("%d\t",iCnt);
     }
   }
}

int main()
{
  int iNo=0;
  
  printf("Enter number : ");
  scanf("%d",&iNo);
  
  Factors(iNo);
  
  return 0;
}

/*
  result 
  
  p
*/
