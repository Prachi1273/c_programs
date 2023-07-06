#include<stdio.h>

void Pattern(int iNo)
{
   int i =0;
   char ch ;
   
      for(i=1;i<=iNo;i++)
      {
         for(ch ='A';ch<='Z';ch++)
         {
            printf("%c\t",ch);
         } 
         printf("\n");
     }
}

int main()
{
   int iValue =0;
   printf("Enter number of element :");
   scanf("%d",&iValue);
   
   Pattern(iValue);
   
   return 0;
}



