#include<stdio.h>

float Percentage(int iValue1,int iValue2)
{
    float result = 0.0;
    
    result = (iValue2*100)/iValue1;
    
    return result;
  
}

int main()
{
   int iNo1 =0,iNo2=0;
   float fRet =0.0;
   
   printf("Enter total number of marks :");
   scanf("%d",&iNo1);
   
   printf("Enter marks obtained :");
   scanf("%d",&iNo2);
   
   fRet=Percentage(iNo1,iNo2);
   
   printf("Result is : %f\n",fRet);
   
   return 0;
}
