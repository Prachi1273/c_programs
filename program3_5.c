#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char cNo)
{
   if(cNo == 'a' || cNo == 'e' || cNo == 'i' ||
        cNo == 'o' || cNo == 'u' || cNo == 'A' ||
        cNo == 'E' || cNo == 'I' || cNo == 'O' || cNo == 'U')
   {
      return true;
   }
   else
   {
     return false;
   }
}

int main()
{
   char cValue='\0';
   bool bRet=false;
   
   printf("Enter Character :");
   scanf("%c",&cValue);
   
   bRet=CheckVowel(cValue);
   
   if(bRet==true)
   {
     printf("It is a VOWEL");
   }
   else
   {
      printf("It is NOT a VOWEL");
   }
   
   return 0;
}

/*
   result : 
   
   prachi@Prachi:~/LBHW$ ./program3_5exe
Enter Character :E
It is a VOWELprachi@Prachi:~/LBHW$ ./program3_5exe
Enter Character :d
It is NOT a VOWEL
*/
