#include<stdio.h>
#include<math.h>
int main()
{
int num;
printf("enter an integer :");
scanf("%d",&num);
if(num % 5 == 0 && num % 7 == 0)
printf("%d is divisible by 5 and 7",num);
else
printf("%d is not divisible by 5 and 7",num);
return 0;
}

