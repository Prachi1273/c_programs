#include<stdio.h>
#include<stdbool.h>

int strlenI(char* str)
{
	int icnt=0;
	
	while(*str!='\0')
	{
		icnt++;
		str++;
	}
	return icnt;
}

int main()
{
	char Arr[20];
	int iret=0;
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	iret=strlenI(Arr);
	
	printf("String length is : %d\n",iret);
	
	return 0;
}
