#include<stdio.h>

void Display(int iValue)
{
   int iCnt = 0;
   
   for(iCnt = 0; iCnt < iValue; iCnt++)
   {
       printf("BARVE\n");
   }
 }
 
 void Display1(int iValue)
 {  
   int iCnt = 0;
   
   while(iCnt < iValue)
   {
      printf("SUVARNANAND\n");
      iCnt++;
   }
}

int main()
{
   int iNo = 0;
   
   printf("Enter data : ");
   scanf("%d",&iNo);
   
   Display(iNo);
   
   printf("Enter data : ");
   scanf("%d",&iNo);
   
   Display1(iNo);
   
   return 0;
}
