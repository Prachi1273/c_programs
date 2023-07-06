#include<stdio.h>
#include<stdlib.h>

int evensum(int arr[],int length)
{
   int i =0,sumeven=0;
   for(i=0;i<length;i++)
   {
      if(arr[i]%2 ==0)
      {
         sumeven = sumeven +arr[i];
      }
   }
   return sumeven;
}

int oddsum(int arr[],int length)
{
   int i =0,sumodd=0;
   for(i=0;i<length;i++)
   {
      if(arr[i]%2 !=0)
      {
         sumodd = sumodd +arr[i];
      }
   }
   return sumodd;
}

int diffrence(int iRet1,int iRet2)
{
  int diff=0;
  
  diff= iRet1-iRet2;
  
  return diff;
}

int main()
{
   int *p = NULL;
   int isize=0,icnt=0,iret =0;
   
   printf("Enter number of elements :");
   scanf("%d",&isize);
   
   p = (int * )malloc(sizeof(int)*isize);
   
   if(p==NULL)
   {
      printf("unable to allocate memory....");
      return -1;
   }
   
   printf("Enter %d elements\n ",isize);  
   
   for(icnt=0;icnt<isize;icnt++)
   {
      printf("Enter elements %d : ",icnt+1);
      scanf("%d",&p[icnt]);
   }
   int iRet1 =0,iRet2=0,diff=0;
   
   iRet1 = evensum(p, isize);
   printf("summation of even numbers is : %d\n",iRet1);
   
   iRet2 = oddsum(p,isize);
   printf("summation of odd numbers is : %d\n",iRet2);
   
   iret = diffrence(iRet1,iRet2);
   
   printf("Result is %d\n",iret);
   
   free(p);
   
   return 0;
}

/*
prachi@Prachi:~/LBHW$ ./program14_1exe
Enter number of elements :6
Enter 6 elements
 Enter elements 1 : 85
Enter elements 2 : 66
Enter elements 3 : 3
Enter elements 4 : 80
Enter elements 5 : 93
Enter elements 6 : 88
summation of even numbers is : 234
summation of odd numbers is : 181
Result is 53

*/
