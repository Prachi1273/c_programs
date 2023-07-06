#include<stdio.h>
#include<stdbool.h>

bool ChkLarge(char ch)
{//       65             90
  if((ch>='A') && (ch <= 'Z'))
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
   
   bRet = ChkLarge(cValue);
   
   if(bRet==true)
   {
     printf("%c is large case letter\n ",cValue);
   }
   else
   {
     printf("%c is NOT large case letter\n ",cValue);
   }
 
   return 0;
}
