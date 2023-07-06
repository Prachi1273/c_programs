#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *arr)
{
	while(*arr!='\0')
	{
		if((*arr>='0') && (*arr<='9'))
		{
			printf("%c",*arr);;
		}
		arr++;
	}
}

int main()
{
	char arr[20];
	
	printf("Enter string : ");
	scanf("%[^'\n']s",arr);
	
	strlwrx(arr);
	
	return 0;
}
