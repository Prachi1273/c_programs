#include<stdio.h>

void pattern(int ino1,int ino2)
{
	char ch='A';
	int i=0,j=0;
	for(i=ino1;i>=1;i--)
	{
		for(j=1;j<=ino2;j++)
		{
			printf("%d\t",i);
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
prachi@Prachi:~/LBHW$ ./program20_4exe
Enter no. of rows and columns:
4
4
4	4	4	4	
3	3	3	3	
2	2	2	2	
1	1	1	1	*/
