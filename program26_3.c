#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *arr)
{
	while(*arr!='\0')
	{
		if((*arr>='a') && (*arr<='z'))
		{
			*arr=*arr-32;
		}
		else if((*arr>='A') && (*arr<='Z'))
		{
			*arr=*arr+32;
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
	
	printf("modified string is : %s",arr);
	
	return 0;
}
