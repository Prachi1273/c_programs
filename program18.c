#include<stdio.h>

void Display(int ivalue)
{
   int iCnt = 0;
   for(iCnt = 0; iCnt< ivalue; iCnt++)
   {
     printf("%d\n",iCnt);
   }
}

int main()
{
  int iNo = 0;
  printf("Enter value :");
  scanf("%d",&iNo);
  Display(iNo);
  
  return 0;
}
