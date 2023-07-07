#include<string.h>
#include<stdio.h>

//To compare 2 String

void compare()

{
   char string2[20];

   char string[20];

   printf("\nEnter 1st String: ");

   scanf("%s",string);

   printf("\nEnter 2nd String: ");

   scanf("%s",string2);

   if(strcmp(string,string2)==0)

   {
   	printf("\nBoth are equal");
   }
   else
   {
   	printf("\nBoth are different");
   }
}

// To convert into lowercase

void lowercase()

{

char str[20];

    int i;

    printf("Enter String : ");

    scanf("%s",str);

    printf("----------------------------------\n");

    /* To print string in lowercase*/

    for(i=0;i<=strlen(str);i++)

    {
        if(str[i]>=65&&str[i]<=90)

        str[i]=str[i]+32;
    }

    printf("String in Lowercase: %s",str);    

}

void main()

{
    int c;

    do
   {
        printf("\n\n1.Compare two strings\n2. convert string to lowercase 3. Exit\nEnter your choice:");

        scanf("%d",&c);

        switch(c)
       {
           case 1:compare();break;
           case 2:lowercase();break;
       }
   }while(c<3);
}
/*
output :

1.Compare two strings
2. convert string to lowercase 3. Exit
Enter your choice:1

Enter 1st String: tanaya

Enter 2nd String: tanya

Both are different

1.Compare two strings
2. convert string to lowercase 3. Exit
Enter your choice:1

Enter 1st String: raj

Enter 2nd String: raj

Both are equal

1.Compare two strings
2. convert string to lowercase 3. Exit
Enter your choice:2
Enter String : PRACHI
----------------------------------
String in Lowercase: prachi

1.Compare two strings
2. convert string to lowercase 3. Exit
Enter your choice:2
Enter String : barve
----------------------------------
String in Lowercase: barve

1.Compare two strings
2. convert string to lowercase 3. Exit
Enter your choice:3

*/
