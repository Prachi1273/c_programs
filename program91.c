#include<stdio.h>

int main()
{
  char str[30];
  
  printf("Enter Your name:\n");

  //scanf("%s",str);
  scanf("%[^'\n']s",str);
  
  printf("your name is : %s\n",str);
  
  return 0;
}


