#include<stdio.h>
#include<stdbool.h>

bool Chk(char *str,char ch)
{ 
   
   while(*str != 0)
   {
      if(*str ==ch )
      {
     
        break;
      }
      str++;
   }
 if(*str == '\0')
 {
   return false;
 }
 else
 {
   return true;
 }
}

int main()
{
  char Arr[20];
  char cValue ='\0';
  
  bool bRet =false;
  
  printf("Enter String :\n");
  scanf("%[^'\n']s",Arr);
  
 printf("Enter the character :\n");
 scanf(" %c",&cValue);
  //space before %c
  bRet = Chk(Arr,cValue);
  
  if(bRet==true)
  {
  printf("character is present\n");
  }
  else
  {
   printf("character is not present\n");
  }
  
  return 0;
}
/*
  Enter String :barve prachi
Frequency of small letters  : 11
*** stack smashing detected ***: terminated
Aborted (core dumped)


these error is becuse more characters only enter 9 chracters
*/
