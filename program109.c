#include<stdio.h>

int countSpace(char *str)
{
   int i = 0;
   while(*str!='\0')
   {
     if(*str==' ')
     {
        i++;
     }
      str++;
   }  
   return i;
}

int main()
{
   char Arr[20];
   int iRet =0;
   
   printf("Enter String :\n");
   scanf("%[^'\n']s",Arr);
   
   iRet = countSpace(Arr);
   
   printf("Number of white spaces are : %d\n",iRet);
   
   return 0;
}
