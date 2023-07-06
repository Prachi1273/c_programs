#include<stdio.h>

void strcpyX(char *src,char *dest)
{
   while(*src != '\0')
   {
      if((*src>='A') && (*src<='Z'))
      {
         *dest = *src+32;
      }
     else
     {
        *dest = *src;
     }
      
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
   
   strcpysmall(Arr,Brr);
   
   printf("Copied string is : %s\n",Brr);
   printf("original string is : %s\n",Arr);
   
   return 0;
}
