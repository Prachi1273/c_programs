#include<stdio.h>
#include<stdlib.h>

int countspace(char *arr)
{
	int i =0;
	
	while(*arr!='\0')
	{
		if(*arr==' ')
		{
			i++;
		}
		arr++;
	}
	return i;
}

int main()
{
	char arr[20];
	int ret=0;
	
	printf("Enter string : ");
	scanf("%[^'\n']s",arr);
	
	ret = countspace(arr);
	
	printf("no. of white spaces present : %d",ret);
	
	return 0;
}
