#include <stdio.h>
void main()
{
 long int x,y,power=1,i=1;
 printf("Enter the values of X and Y : \n");
 scanf("%d %d",&x,&y);
 power=x;
 while(y!=i)
 {
  power=power*x;
  i++;
 }
 printf("%d to the power of %d = %d",x,y,power);
}
