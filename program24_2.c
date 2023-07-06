#include<stdio.h>
#include<stdbool.h>

char Convert(char ch)
{
  if((ch>='a') && (ch<='z'))
  {
     return ch-32;
  }
  else if((ch>='A') && (ch<='Z'))
  {
     return ch+32;
  }
}

int main()
{
   char ch ='\0',cret='\0';
   
   printf("Enter character:");
   scanf("%c",&ch);
   
   cret=Convert(ch);
   
   printf("%c\n",cret);
   
   return 0;
}
