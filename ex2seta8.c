#include<stdio.h>
int main()
{
char ch;
printf("enter a character :");
scanf("%c",&ch);
printf("previous character:%c\n",ch-1);
printf("ASCII value of %c = %d",ch,ch);
return 0;
}

