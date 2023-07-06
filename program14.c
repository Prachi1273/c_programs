#include<stdio.h>

void Ganesh(int ivalue)
{
  int iCnt = 0;
  
  for(iCnt = 0; iCnt < ivalue; iCnt++)
  {
     printf("Prachi Barve\n");
  }
}

int main()
{
   int iNo = 0;
   
   printf("Enter how many times we have to print Statements : ");
   scanf("%d",&iNo);
   
   Ganesh(iNo);
   
   return 0;
}

