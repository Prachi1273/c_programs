//Factors(time complexity)

#include<stdio.h>

void DisplayFactors(int iValue)
{
   /*
       (8 % 1) == 0
       (8 % 2) == 0
       (8 % 3) == 0
       (8 % 4) == 0          
       (8 % 5) == 0
       (8 % 6) == 0
       (8 % 7) == 0
   */
   int iCnt = 0;
   printf("Factors are :\n");
   //O(N/2)  order of N/2
   for(iCnt = 1; iCnt <= (iValue/2); iCnt++)
   {
      if((iValue % iCnt)==0)
      {
         printf("%d\n",iCnt);
      }
   }
}   

int main()
{
   int iNo;
   
   printf("Enter value :\n");
   scanf("%d",&iNo);
   
   DisplayFactors(iNo);
   
   return 0;
}
