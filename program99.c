#include<stdio.h>

int Countoccu(char *str,char a)
{
   int iCnt =0;
   
   while(*str != 0)
   {
      if(*str ==a )
      {
        iCnt++;
      }
      str++;
   }
   return iCnt;
}

int main()
{
  char Arr[10];
  char p;
  
  int iRet =0;
  
  printf("Enter String :\n");
  scanf("%[^'\n']s",Arr);
  
 
  
  iRet = Countoccu(Arr,'a');
  
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
