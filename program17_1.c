#include<stdio.h>
#include<stdlib.h>

int Max(int *arr,int iSize)
{
   int icnt =0,maxi=0;
   for(icnt =0;icnt<iSize;icnt++)
   {
      if(arr[icnt]>maxi)
      {
        maxi = arr[icnt];
      }
   }
   return maxi;
}

int main()
{
   int iValue =0,i=0,iRet=0;
   int* p = NULL;
   
   printf("Enter number of elements : \n");
   scanf("%d",&iValue);
   
   p = (int*)malloc(sizeof(int)*iValue);
   
   if(p==NULL)
   {
     printf("Unable to allocate memory.....");
     return -1;
   }
   
   printf("Enter %d elements \n",iValue);
   
   for(i=0;i<iValue;i++)
   {
      printf("Enter element %d : ",i+1);
      scanf("%d",&p[i]);
   }
   
   iRet = Max(p,iValue);
   
   printf("Maximum nuber is %d\n",iRet);
   
   return 0;
}
/*
prachi@Prachi:~/LBHW$ ./program17_1exe
Enter number of elements : 
6
Enter 6 elements 
Enter element 1 : 56
Enter element 2 : 88
Enter element 3 : 37
Enter element 4 : 62
Enter element 5 : 95
Enter element 6 : 14
Maximum nuber is 95

*/
