#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkvwl(char crr[20])
{
	int i=0;
	
	while(crr[i]!='\0')
	{
		if((crr[i]=='a') || (crr[i]=='e') || (crr[i]=='i') || (crr[i]=='o') || (crr[i]=='u'))
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
	char crr[20];
	bool cret =false;
	
	printf("Enter String : ");
	scanf("%[^'\n']s",crr);
	
	cret=checkvwl(crr);
	
	if(cret==true)
	{
		printf("TRUE\n");
	}
	else if(cret==false)
	{
		printf("FALSE\n");
	}
	
	return 0;
}
