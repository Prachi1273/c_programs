#include<stdio.h>
#include<stdbool.h>

int strlenR(char* str)
{
	static int icnt=0;
	
	if(*str!='\0')
	{
		icnt++;
		str++;
		strlenR( str);
	}
	return icnt;
}

int main()
{
	char Arr[20];
	int iret=0;
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	iret=strlenR(Arr);
	
	printf("String length is : %d\n",iret);
	
	return 0;
}
