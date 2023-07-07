#include<stdio.h>

int main()

{

int size,i,sum=0 , a ;

float average;

printf("enter size of array elements : ");

scanf("%d",&size);

int arr[size];

int *p=&arr[size];

printf("enter array elements : ");

for(i=0;i<size;i++)

{
scanf("%d",p+i);
}

for(i=0;i<size;i++)

{
sum+=*(p+i);
}

average=sum / size;

printf("the sum of array elements is:%d\n",sum);

printf("the average of array elements is:%.2f\n",average);

return 0;

}

