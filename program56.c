#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iMax = Arr[0],iCnt =0;
    
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
       if(Arr[iCnt]>iMax)
       {
          iMax = Arr[iCnt];
       }
    }
    return iMax;
}

int main()
{
  int *ptr = NULL;
  int ilength=0,i=0,iRet=0;
  printf("Enter number of elements :\n");
  scanf("%d",&ilength);
  
  ptr=(int *)malloc(ilength*sizeof(int));
  
  printf("Enter the elements :\n");
  for(i=0; i<ilength; i++)
  {
    scanf("%d",&ptr[i]);
  }
  
  iRet = Maximum(ptr,ilength);
  
  printf("Maximum number is : %d\n",iRet);
  
  free(ptr);

  return 0;
}
