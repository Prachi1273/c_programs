#include<stdio.h>

void pattern(int ino1,int ino2)
{
	char ch='A';
	int i=0,j=0;
	for(j=0;j<ino2;j++,ch++)
	{
		for(i=0;i<ino1;i++)
		{
			printf("%c\t",ch);
		}
		printf("\n");
	}
}

int main()
{
	int ino1=0,ino2=0;
	
	printf("Enter no. of rows and columns:\n");
	scanf("%d%d",&ino1,&ino2);
	
	pattern(ino1,ino2);
	
	return 0;
}

/*
Enter no. of rows and columns:
5
3
A	A	A	A	A	
B	B	B	B	B	
C	C	C	C	C	*/
