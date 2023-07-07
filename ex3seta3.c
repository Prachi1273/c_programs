#include<stdio.h>  
int main()
{
    char character;
    printf("Enter a Character\n");
    scanf("%c", &character);
     
    if(character >= '0' && character <= '9')
 {
        printf("%c is a Digit \n", character);
        }
    else
       {
     printf("%c is a not Digit \n", character);
       }
}
