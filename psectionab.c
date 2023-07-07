#include<stdio.h>
int main()
{
int arr[10],n,i,key;
printf("enter how many numbers in an array :");
scanf("%d",&n);

for(i=0;i<n;i++)
{ 
printf("accept n numbers in an array : ");
scanf("%d",&arr[i]);
}
printf("\n display array elements \n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("enter search value");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(arr[i]==key)
printf("number found at position %d",i+1);
}
return 0;
}
