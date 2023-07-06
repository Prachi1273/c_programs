#include<stdio.h>

int main()
{
   int arr[4] = {10,20,30,40};
   int *p = &(arr[0]);
   int *q = &(arr[3]);

    printf("%d\n",arr[0]); // 10 
    printf("%d\n",*p);      // 10
    printf("%d\n",arr[3]);  // 40
    printf("%d\n",*q);      //30
   
   return 0;
}
