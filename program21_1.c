#include<stdio.h>

void pattern(int ino1,int ino2)
{
	int no=1;
	int i=0,j=0;
	for(i=1;i<=ino1;i++)
	{
		for(j=1;j<=ino2;j++,no++)
		{
			printf("%d\t",no);
			if(no>=9)
			{
				no=0;
			}
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
4
4
1	2	3	4	
5	6	7	8	
9	1	2	3	
4	5	6	7
	*/
