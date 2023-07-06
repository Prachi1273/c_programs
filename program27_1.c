#include<stdio.h>
#include<stdlib.h>

int countspace(char *arr, char ch)
{
	int i=0;
	while(*arr!='\0')
	{
		if(*arr == ch)
		{
			i++;
		}
		arr++;
	}
	return i;
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
	
	printf("frequency of %c is : %d",ch,ret);
	
	return 0;
}
