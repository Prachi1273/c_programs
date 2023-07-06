#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{ 
   if(ch>='a' &&  ch<='z')
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
   char cValue =0;
   bool bret = false;
   
   printf("Enter the character :");
   scanf("%c",&cValue);
   
   bret = ChkSmall(cValue);
   
   if(bret == true)
   {
      printf("It's a small\n");
   }
   else
   {
      printf("It's not a small\n");
   }
   
   return 0;
}

/*
  result :
  
  prachi@Prachi:~/LBHW$ ./program23_4exe
Enter the character :a
It's a small
prachi@Prachi:~/LBHW$ ./program23_4exe
Enter the character :Q
It's not a small
prachi@Prachi:~/LBHW$ ./program23_4exe
Enter the character :2
It's not a small
prachi@Prachi:~/LBHW$ ./program23_4exe
Enter the character :@
It's not a small

*/
