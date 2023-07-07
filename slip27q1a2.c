#include<string.h>
#include<stdio.h>

//To get length of given string

void lengthofstring()

{
   int length;
   
   char string[20];
   
   printf("\nEnter String: ");
   
   scanf("%s",string);
   
   length=strlen(string);
   
   printf("\nLength of string is: %d",length);
}

//To copy one string into another

void copystring()

{
   char string2[20];

   char string[20];

   printf("\nEnter String: ");

   scanf("%s",string);

   strcpy(string2,string);

   printf("\nCopied string is: %s",string2);
}

void main()

{
    int c;

    do
   {
        printf("\n\n1. Length of string\n2. Copy String \n3.Exit\nEnter your choice:");

        scanf("%d",&c);

        switch(c)
       {
           case 1:lengthofstring();break;
           case 2:copystring();break;
       }

   }
   while(c<5);
}
/*
output :
1. Length of string
2. Copy String 
3.Exit
Enter your choice:1

Enter String: prachi

Length of string is: 6

1. Length of string
2. Copy String 
3.Exit
Enter your choice:2

Enter String: barve

Copied string is: barve

1. Length of string
2. Copy String 
3.Exit
Enter your choice:3


1. Length of string
2. Copy String 
3.Exit
Enter your choice:

*/
