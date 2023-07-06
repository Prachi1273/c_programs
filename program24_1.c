#include<stdio.h>

void DisplayASCII()
{ 
   int i =0;
   printf("ASCII TABLE :-");
   for(i=0;i<256;i++)
   {
      printf("%d \t %c \t %x \t %o \t\n",i,i,i,i);
   }
}

int main()
{
   DisplayASCII();
   
   return 0;
}


