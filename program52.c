#include<stdio.h>
#include<stdlib.h>

int CountEven(int *ptr,int iValue)
{
   int i = 0,iEvenCnt = 0;
   for(i=0; i<iValue; i++)
   {
      if((ptr[i] %2)==0)
      {
        iEvenCnt++;
      }
   }
   return iEvenCnt;
}

int main()
{
  int *ptr =NULL;
  int iValue = 0,iCnt = 0;
  int iRet = 0;
  
  printf("Enter the number of elements :");
  scanf("%d",&iValue);
  
  ptr = (int *)malloc(sizeof(int)*iValue);
  printf("Enter the elments : \n");
  
  for(iCnt = 1; iCnt<iValue; iCnt++)
  {
    scanf("%d\n",&ptr[iCnt]);
  }
  
  iRet = CountEven(ptr,iValue);
  printf("no of Even elements is : %d\n",iRet);
  
  free(ptr);
  
  return 0;
}
