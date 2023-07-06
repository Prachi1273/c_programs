#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool countspace(char ch, char *arr )
{
	int i=0;
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i] == ch)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
}

int main()
{
	char arr[20];
	char ch = '\0';
	bool bret=0;
	
	printf("Enter string : ");
	scanf("%[^'\n']s",arr);
	
	printf("Enter character : ");
	scanf(" %c",&ch);
	
	bret = countspace(ch , arr);
	
	if(bret ==true)
	{
		printf("Character is present \n");
	}
	else if(bret == false)
	{
		printf("Character is NOT present \n");
	}
	
	return 0;
}
