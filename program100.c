#include<stdio.h>

int Countoccu(char *str,char ch)
{
   int iCnt =0;
   
   while(*str != 0)
   {
      if(*str ==ch )
      {
        iCnt++;
      }
      str++;
   }
   return iCnt;
}

int main()
{
  char Arr[20];
  char cValue ='\0';
  
  int iRet =0;
  
  printf("Enter String :\n");
  scanf("%[^'\n']s",Arr);
  
 printf("Enter the character :\n");
 scanf(" %c",&cValue);
  //space before %c
  iRet = Countoccu(Arr,cValue);
  
  printf("Frequency of  letters  : %d\n",iRet);
  
  return 0;
}
/*
  Enter String :barve prachi
Frequency of small letters  : 11
*** stack smashing detected ***: terminated
Aborted (core dumped)


these error is becuse more characters only enter 9 chracters
*/
