#include<stdio.h>

int CountCh(char *str)
{
   int iCnt =0;
   
   while(*str != 0)
   {
      if(*str =='a' || *str == 'A')
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
  
  int iRet =0;
  
  printf("Enter String :");
  scanf("%[^'\n']s",Arr);
  
  iRet = CountCh(Arr);
  
  printf("Frequency of a is : %d\n",iRet);
  
  return 0;
}

/*
  Enter String :barve prachi
Frequency of small letters  : 11
*** stack smashing detected ***: terminated
Aborted (core dumped)


these error is becuse more characters only enter 9 chracters
*/
