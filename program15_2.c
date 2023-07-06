#include<stdio.h>
#include<stdlib.h>

int CountEven(int* arr,int iSize)
{
   int icnt=0,ecount=0;
   for(icnt =0;icnt<iSize;icnt++)
   {
      if(arr[icnt]%2==0)
      {
         ecount = ecount+1;
      }
   }
   return ecount;
}


int CountOdd(int* arr,int iSize)
{
   int icnt=0,ocount=0;
   for(icnt =0;icnt<iSize;icnt++)
   {
      if(arr[icnt]%2!=0)
      {
         ocount = ocount+1;
      }
   }
   return ocount;
}

int main()
{
   int *ptr = NULL;
   int iNo=0,i=0,iRet1 =0,iRet2=0,diff=0;
   
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
   
   iRet1 = CountEven(ptr,iNo);  
   printf("Even elements are %d\n",iRet1);
   
   iRet2 = CountOdd(ptr,iNo);   
   printf("odd elements are %d\n",iRet2);
   
   diff=iRet1-iRet2;
   
   printf("Diffrence is %d\n",diff);
   
   return 0;
}

/*
prachi@Prachi:~/LBHW$ gcc program15_2.c -o program15_2exe
prachi@Prachi:~/LBHW$ ./program15_2exe
Enter number of elements :7
Enter the elements:
Enter element 1 :85
Enter element 2 :66
Enter element 3 :3
Enter element 4 :80
Enter element 5 :93
Enter element 6 :88
Enter element 7 :90
Even elements are 4
odd elements are 3
Diffrence is 1

*/
