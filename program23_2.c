#include<stdio.h>
#include<stdbool.h>

bool ChkC(char ch)
{
   if(ch>='A' && ch<= 'Z')
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
   char cValue ='\0';
   bool bret = false;
   
   printf("Enter a character :");
   scanf("%c",&cValue);
   
   bret =ChkC(cValue);
   
   if(bret == true )
   {
      printf("character is in Caps\n");
   }
   else
   {
     printf("character is NOT in Caps\n");
   }
   
   return 0;
}

/*
result :

prachi@Prachi:~/LBHW$ ./program23_2exe
Enter a character :F
character is in Caps
prachi@Prachi:~/LBHW$ ./program23_2exe
Enter a character :d
character is NOT in Caps


*/
