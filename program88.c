#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{//       97             122
  if((ch>='a') && (ch <= 'z'))
  {
    return true ;
  }
  else 
  {
    return false;
  }
}

int main()
{
   char cValue = '\0';
   bool bRet = false;
   
   printf("Enter one Character :");
   scanf("%c",&cValue);    
   
   bRet = ChkSmall(cValue);
   
   if(bRet==true)
   {
     printf("%c is small case letter\n ",cValue);
   }
   else
   {
     printf("%c is NOT small case letter\n ",cValue);
   }
 
   return 0;
}
