#include<stdio.h>
int main()
{
 int x,n,sum=0,i;
 printf("enter value of x : ");
 scanf("%d",&x);
 printf("enter limit n : ");
 scanf("%d",&n);
 n=n*(2);
 for(i=0;i<n;i++)
 {
  if(i%2!=0)
  {
   sum=sum + (i * x);
  }
 }
 printf("sum of series : %d",sum);
}

