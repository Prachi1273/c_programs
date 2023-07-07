#include <stdio.h>
#include<math.h>
int main()
{
 int id;
 float m, bsalary,da, tax,house_rate;
 printf("enter emp id :");
 scanf("%d",&id);
 printf("enter  the basic salary : ");
 scanf("%f",&bsalary);
 house_rate = (bsalary * 0.1);
 da = (bsalary * 0.3);
 tax= (bsalary * 0.05);
 m=bsalary + ((house_rate+da)-tax);
 printf("id : %d salary : %f",id,m);
}
