#include<string.h>
#include<stdio.h>

// To convert into lowercase
int main()

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
    
    return 0;
}
/*
OUTPUT :
Enter String : PRACHI_BARVE
----------------------------------
String in Lowercase: prachi_barve
*/
