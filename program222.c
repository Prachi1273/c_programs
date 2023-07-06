#include<stdio.h>

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
	printf("Inside main\n");
	
	DisplayR();
	
	printf("End of main\n");
	
	return 0;
}
