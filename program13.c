#include<stdio.h>

void Display()
{
  register int iCnt = 0;
   
   for(iCnt = 1; iCnt < 10; iCnt++)
   {
      printf("JAY GANESH !\n");
   }
   iCnt = 1;
   do
   {
      printf("LB\n");
      iCnt++;
   }while(iCnt < 5);
   iCnt = 0;
   while(iCnt < 5)
   {
      printf("Trying...\n");
      iCnt++;
   }
}

int main()
{
  Display();
  
  return 0;
}
