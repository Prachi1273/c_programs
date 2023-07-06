#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
  int iSum=0,i =0;
  
  for(i =0; i<iSize; i++)
  {
     iSum=iSum+Arr[i];
  }
  
  return (iSum / iSize);
}

int main()
{
  int *ptr = NULL;
  int iValue = 0,iCnt = 0;
  float fRet = 0.0f;
  
  printf("Enter the number of elements : ");
  scanf("%d",&iValue);
  
  ptr = (int *)malloc(iValue*sizeof(int));
  
  printf("Enter elements :\n");
  for(iCnt = 0; iCnt<iValue;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }  
  
  fRet=Average(ptr,iValue);
  printf("Average is : %f\n",fRet);
  
  free(ptr);
  
  return 0;
}
