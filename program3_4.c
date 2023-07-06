#include<stdio.h>

void DisplayConvert(char cNo)
{
   if(cNo>='a' && cNo <='z')
   {
     printf("%c",toupper(cNo));
   }
   else if(cNo>='A' && cNo <='Z')
   {
      printf("%c",tolower(cNo));
   }
}

int main()
{
   char cValue='\0';
   
   printf("Enter Character :");
   scanf("%c",&cValue);
   
   DisplayConvert(cValue);
   
   return 0;
}

/*
   result : 
   
   prachi@Prachi:~/LBHW$ ./program3_4exe
Enter Character :a
A
prachi@Prachi:~/LBHW$ ./program3_4exe
Enter Character :d
D

*/
