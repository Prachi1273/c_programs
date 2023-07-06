#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOdd(int *ptr,int iValue)
{
   int i = 0,iEvenCnt = 0,OddCnt =0;
   for(i=0; i<iValue; i++)
   {
      if((ptr[i] %2)==0)
      {
        iEvenCnt++;
      
      }
      else
      {
        OddCnt++;
        
      }
   }
  printf("Number of even elements are : %d\n",iEvenCnt);
  printf("Number of odd elements are : %d\n",OddCnt);
}

int main()
{
  int *ptr =NULL;
  int iValue = 0,iCnt = 0;
  
  printf("Enter the number of elements :");
  scanf("%d",&iValue);
  
  ptr = (int *)malloc(sizeof(int)*iValue);
  printf("Enter the elments : \n");
  
  for(iCnt = 1; iCnt<iValue; iCnt++)
  {
    scanf("%d\n",&ptr[iCnt]);
  }
  
   DisplayEvenOdd(ptr,iValue);
  
  free(ptr);
  
  return 0;
}
