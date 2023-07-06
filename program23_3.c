#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{ 
   if(ch>='0' &&  ch<='9')
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
   
   printf("Enter the number :");
   scanf("%c",&cValue);
   
   bret = ChkDigit(cValue);
   
   if(bret == true)
   {
      printf("It's a digit\n");
   }
   else
   {
      printf("It's not a digit\n");
   }
   
   return 0;
}
/*
   result :
   
   prachi@Prachi:~/LBHW$ ./program23_3exe
Enter the number :3
It's a digit
prachi@Prachi:~/LBHW$ ./program23_3exe
Enter the number :a
It's not a digit

*/
