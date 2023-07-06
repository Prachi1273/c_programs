#include<stdio.h>

void Display(int ivalue)
{
   int iCnt = 1;
   while(iCnt< ivalue)
   {
     printf("%d\n",iCnt);
      iCnt++;
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
