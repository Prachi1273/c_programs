#include<stdio.h>
#include<stdlib.h>

void Display(char c)
{
	char ch='\0';
	
	if((c>='a') && (c<='z'))
	{
		for(ch=c;ch>='a';ch--)
		{
			printf("%c\t",ch);
		}
	}
	else if((c>='A') && (c<='Z'))
	{
		for(ch=c;ch<='Z';ch++)
		{
			printf("%c\t",ch);
		}
	}
	
	printf("\n");
}

int main()
{
	char c='\0';
	
	printf("Enter character : ");
	scanf("%c",&c);
	
	Display(c);
	
	return 0;
}
