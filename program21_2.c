#include<stdio.h>

void pattern(int ino1,int ino2)
{
	int no=1;
	int i=0,j=0;
	for(i=1;i<=ino1;i++)
	{
		for(j=1;j<=ino2;j++,no++)
		{		
			if(j%2!=0 && i%2!=0 && no%2!=0)
			{
				printf("%d\t",no);
				if(no>9)
				{
					no=1;
				}
			}
			else if(j%2==0 && i%2==0)
			{
				printf("%d\t",j);
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
8
1	3	5	7	
2	4	6	8	
17	3	5	7	
2	4	6	8
	*/
