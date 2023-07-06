#include<stdio.h>

void DisplayI()
{
	int icnt=1; //auto
	
	while(icnt<=4)
	{
		printf("*\t");
		icnt++;
	}
}

void DisplayR()
{
	static int icnt=1;
	
	if(icnt<=4)
	{
		printf("*\t");
		icnt++;
		DisplayR();
	}
}

int main()
{
	DisplayR();
	
	return 0;
}
