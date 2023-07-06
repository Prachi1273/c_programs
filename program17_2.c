#include<stdio.h>
#include<stdlib.h>

int Minimum(int *arr,int iSize)
{
   int icnt =0,min;
   for(icnt =0;icnt<iSize;icnt++)
   {
      if(arr[icnt]<min)
      {
        min = arr[icnt];
      }
   }
   return min;
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
   
   iRet = Minimum(p,iValue);
   
   printf("Minimum number is %d\n",iRet);
   
   return 0;
}
/*
prachi@Prachi:~/LBHW$ ./program17_2exe
Enter number of elements : 
5
Enter 5 elements 
Enter element 1 : 98
Enter element 2 : 76
Enter element 3 : 54
Enter element 4 : 32
Enter element 5 : 10
Minimum number is 10
*/
