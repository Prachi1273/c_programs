#include<stdio.h>

int main()

{
int a=50;

int *p;

p=&a;

printf("Address of p variable is %p \n",p);

p=p+3;
//adding 3 to pointer variable

printf("After adding 3: Address of p variable is %p \n",p);

return 0;

}
