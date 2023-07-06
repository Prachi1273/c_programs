#include<stdio.h>
#include<stdbool.h>

bool ChkC(char ch)
{
   if((ch>='a'  &&  ch<='z') || (ch>='A' && ch<= 'Z'))
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
      printf("It is a character\n");
   }
   else
   {
     printf("It is NOT a character\n");
   }
   
   return 0;
}

/*
result :

m23_1exe
prachi@Prachi:~/LBHW$ ./program23_1exe
Enter a character :A
It is a character
prachi@Prachi:~/LBHW$ ./program23_1exe
Enter a character :F
It is a character
prachi@Prachi:~/LBHW$ ./program23_1exe
Enter a character :g
It is a character
prachi@Prachi:~/LBHW$ ./program23_1exe
Enter a character :8
It is NOT a character
prachi@Prachi:~/LBHW$ ./program23_1exe
Enter a character :$
It is NOT a character


*/
