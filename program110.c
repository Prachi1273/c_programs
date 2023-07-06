#include<stdio.h>

void strcpyX(char *src,char *dest)
{
   while(*src != '\0')
   {
      *dest = *src;  // empty string should be first
      
      src++;
      dest++;
   }
   *dest = '\0';  //<- IMP   
}

int main()
{
   char Arr[20];
   char Brr[20];
   
   printf("Enter String :\n");
   scanf("%[^'\n']s",Arr);
   
   strcpyX(Arr,Brr);
   
   printf("Copied string is : %s\n",Brr);
   
   return 0;
}
