#include<stdio.h>

#define MAX(a,b) ((a>b)?a:b)

 int main()

   {

       int a,b,max;

       printf("enter first no :\n");

       scanf("%d",&a);

       printf("enter second no:\n ");

       scanf("%d",&b);

       max=MAX(a,b);

       printf("maximum number is:%d\n",max);

       return 0;

   }

/*

output : 

    enter first no :
    5
    enter second no:
    8
    
    maximum number is:8

    enter first no :
    6
    enter second no:
    3
    
    maximum number is:6

*/
