#include<stdio.h>
int main()
{
 int w,x,y,z;
 printf("enter withdrow amount : ");
 scanf("%d",&w);
 x=w/10;
 w=w%10;
 y=w/5;
 w=w%5;
 z=w;
 printf("note of 10 : %d\n",x);
 printf("note of  5 : %d\n",y);
 printf("note of  1 : %d\n",z);
}
