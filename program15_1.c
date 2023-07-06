#include<stdio.h>
#include<stdlib.h>

int CountEven(int* arr,int iSize)
{
   int icnt=0,count=0;
   for(icnt =0;icnt<iSize;icnt++)
   {
      if(arr[icnt]%2==0)
      {
         count = count+1;
      }
   }
   return count;
}

int main()
{
   int *ptr = NULL;
   int iNo=0,i=0,iRet =0;
   
   printf("Enter number of elements :");
   scanf("%d",&iNo);
   
   ptr = (int *)malloc(sizeof(int)*iNo);
   
   if(ptr ==NULL)
   {
      printf("Unable to allocate memory");
      return -1;
   }
   printf("Enter the elements:\n");
   for(i=0;i<iNo;i++)
   {
      printf("Enter element %d :",i+1);
      scanf("%d",&ptr[i]);
   }
   
   iRet = CountEven(ptr,iNo);
   
   printf("Result is %d\n",iRet);
   
   return 0;
}

/*
prachi@Prachi:~/LBHW$ ./program15_1exe
Enter number of elements :6
Enter the elements:
Enter element 1 :85
Enter element 2 :66
Enter element 3 :3
Enter element 4 :80
Enter element 5 :93
Enter element 6 :88
Result is 3

*/
