#include<stdio.h>

void DisplayR(int ino)
{
	static int icnt=1;
	
	if(icnt<=ino)
	{
		printf("*\t");
		icnt++;
		DisplayR(ino);
	}
}

int main()
{
	int ivalue=0;
	printf("Enter number : \n");
	scanf("%d",&ivalue);
	//printf("Inside main\n");
	
	DisplayR(ivalue);
	
	printf("\nEnd of main\n");
	
	return 0;
}
