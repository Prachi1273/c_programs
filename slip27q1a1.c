#include<stdio.h>

#define MAX(a,b) (a>b?a:b)

int main()

{

  int n1,n2,max;
  
  printf("\n Enter two numbers : ");
  
  scanf("%d%d",&n1,&n2);
  
  max=MAX(n1,n2);
  
  printf("\n Maximum of two numbers = %d",max);
  
  return 0;
  
}
/*
output: 
Enter two numbers : 5
6

 Maximum of two numbers = 6
*/
