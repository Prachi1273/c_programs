#include<stdio.h>
#include<stdbool.h>

void Display(char c)
{
	if((c>='0') && (c<='z'))
	{
		printf("Decimal : %d\n",c);
		printf("Octal : %o\n",c);
		printf("Hexadecimal : %X\n",c);
	}
}

int main()
{
	char c='\0';
	
	printf("Enter character : ");
	scanf("%c",&c);
	
	Display(c);
	
	return 0;
}
