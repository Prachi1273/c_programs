#include<stdio.h>
#include<stdbool.h>

bool Display(char c)
{
	if((c=='!') || (c=='@') || (c=='#') || (c=='$') || (c=='%') || (c=='^') || (c=='&') || (c=='*'))
	{
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	char c='\0';
	bool bret = 'false';
	
	printf("Enter character : ");
	scanf("%c",&c);
	
	bret=Display(c);
	if(bret == true)
	{
		printf("True\n");
	}
	else if(bret == false)
	{
		printf("False\n");
	}
	
	return 0;
}
