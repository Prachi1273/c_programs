#include<stdio.h>

int main()
{
   int i = 0;
   
   printf("___________________________________________\n");
   printf("ASCII table\n ");
   printf("__________________________________________\n");
   
   printf("Character\tDecimal\tHex\tOctal");
   
   for(i=0;i<=127;i++)
   {
     printf("%c \t %d \t %x \t %o\t\n",i,i,i,i);
   }
   
   printf("__________________________________________\n");
   
   
   return 0;
}
