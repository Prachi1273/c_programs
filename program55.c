#include<stdio.h>
#include<stdlib.h>

int CalculateFrequency(int *ptr,int iValue,int iNo)
{
   int i = 0,iFrequency = 0;
   
  for(i=0; i<iValue; i++)
  {
     if(ptr[i] == iNo)
     {
       iFrequency++;
     }
  }
  return iFrequency;
}


int main()
{
  int *ptr =NULL;
  int iValue = 0,iCnt = 0,ilength=0 ,iRet=0;
  
  printf("Enter the number of elements :");
  scanf("%d",&iValue);
  
  ptr = (int *)malloc(sizeof(int)*iValue);
  printf("Enter the elments : \n");
  
  for(iCnt = 1; iCnt<iValue; iCnt++)
  {
    scanf("%d\n",&ptr[iCnt]);
  }
  printf("Enter elements to findout frequency :\n");
  scanf("%d",&ilength);
   iRet = CalculateFrequency(ptr,iValue,ilength);
   printf("frequncy of %d is %d",ilength,iRet);
  
  free(ptr);
  
  return 0;
}
