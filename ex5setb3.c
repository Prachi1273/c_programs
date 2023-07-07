#include<stdio.h>
int main()
{
 int x,n,i,j;
 float sum=0,p,m;
 printf("enter value of x : ");
 scanf("%d",&x);
 printf("enter limit n : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  m=x;
  for(j=1;j<i;j++)
  {
   m=(m*x);
  }
  p=i/m;
  sum=sum+p;
 }
 printf("\nsum of series : %f",sum);
} 
