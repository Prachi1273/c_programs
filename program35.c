// 

#include<stdio.h>

void DisplayReverse(int iNo)
{
   int iCnt = 0;
   
   printf("Display reverse : \n");
   printf("_______________________________________________\n");
   
   iCnt = iNo;
   while( iCnt>=1)
   {
      printf("%d\t",iCnt);
      iCnt--;
   }
    printf("_______________________________________________n");
}

int main()
{
  int iValue = 0;
  
  printf("Enter the number :\n");
  scanf("%d",&iValue);
  
  DisplayReverse(iValue);
  
  return 0;
}
