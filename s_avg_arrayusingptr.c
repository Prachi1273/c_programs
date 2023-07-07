#include<stdio.h>

int main()
   
   {
      int arr[5];
      int *ptr=arr;
      int sum,i;
      float avg;
      printf("Enter 5 array elements : \n");
      for(i=0;i<5;i++)
      {
      ptr+i;
      }
      ptr++;
      sum+=*(ptr+i);
      avg=sum/5;
      printf("the sum of array elemets is %d \n: ",sum);
      printf("the average of array elemets is %f: ",avg);
      return 0;
   }
