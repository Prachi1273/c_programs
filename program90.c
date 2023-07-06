#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{//       48             57
  if((ch>='0') && (ch <= '9'))
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
   
   printf("Enter one number :");
   scanf("%c",&cValue);    
   
   bRet = ChkDigit(cValue);
   
   if(bRet==true)
   {
     printf("%c is a number\n ",cValue);
   }
   else
   {
     printf("%c is NOT number\n ",cValue);
   }
 
   return 0;
}
