#include<stdio.h>

int main()
{
   int iNo1 = 0 , iNo2 = 0;
   int iMult = 0;
   
   printf("Enter First Number :\n");   
   scanf("%d",&iNo1);
   
   printf("Enter second Number :\n");   
   scanf("%d",&iNo2);
   
   printf("First number is : %d\n",iNo1);
   printf("second number is : %d\n",iNo2);
   
   iMult = iNo1 * iNo2;
   
   printf("Multiplication is : %d\n",iMult);

   return 0;
}
