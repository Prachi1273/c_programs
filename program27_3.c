#include<stdio.h>
#include<stdlib.h>

int countspace(char *arr, char ch)
{
	int i=0,count =0;
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]==ch)
		{
			break;
		}
	}
	if(i==-1)
	{
		return -1;
	}
	else
	{
		return i;
	}
}

int main()
{
	char arr[20],ch;
	int ret=0;
	
	printf("Enter string : ");
	scanf("%[^'\n']s",arr);
	
	printf("Enter character : ");
	scanf(" %c",&ch);
	
	ret = countspace(arr, ch);
	
	printf("first occurence  of %c is : %d\n",ch,ret);
	
	return 0;
}
