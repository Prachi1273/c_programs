// 

#include<stdio.h>

void DisplayReverse(int iNo)
{
   int iCnt = 0;
   
   printf("Display reverse : \n");
   printf("______________________\n");
   for(iCnt = iNo; iCnt>=1;iCnt--)
   {
      printf("%d\t",iCnt);
   }
    printf("______________________\n");
}

int main()
{
  int iValue = 0;
  
  printf("Enter the number :\n");
  scanf("%d",&iValue);
  
  DisplayReverse(iValue);
  
  return 0;
}
