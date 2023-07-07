#include<stdio.h>
int main()
{
int var1,var2,temp;
printf("enter two integers");
scanf("%d%d",&var1,&var2);
printf("before swapping\nfirst variable = %d\n second variable = %d\n ",var1,var2);
temp=var1;
var1=var2;
var2=temp;
printf("after swapping \n first variable = %d \n second variable = %d\n",var1,var2);
return 0;}

