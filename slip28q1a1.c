#include<stdio.h>

#define SQUARE(x)  x*x

int main() 

{

int n;

printf("\n Enter number : ");

scanf("%d",&n);

printf("\n Square of %d is %d",n,SQUARE(n));

return 0;

}
/*
output :
Enter number : 6

 Square of 6 is 36
*/
