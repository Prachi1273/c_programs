#include<stdio.h>
void main()
{
 int num,i=1;
 printf("Enter the nth value: \n");
 scanf("%d",&num);
 num++;
 while(num!=i)
 {
  if(i%2==0)
  {
  printf("%d ",i);
     }
  i++;
 }
}
