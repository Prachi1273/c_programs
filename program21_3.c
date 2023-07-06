#include<stdio.h>

void pattern(int ino1,int ino2)
{
	int no=1;
	char ch='a';
	int i=0,j=0;
	for(i=1;i<=ino1;i++)
	{
		for(j=1;j<=ino2;j++)
		{		
			if(j%2!=0 && i%2!=0)
			{
				printf("%c\t",ch);
				ch++;
				if(ch>'e')
				{
					ch='a';
				}
				
			}
			else if(j%2!=0)
			{
				printf("%d\t",no);
				no++;
				if(no>=6)
				{
					no=1;
					
				}
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
prachi@Prachi:~/LBHW$ ./program21_3exe
Enter no. of rows and columns:
4
10
a	b	c	d	e	
1	2	3	4	5	
a	b	c	d	e	
1	2	3	4	5	
prachi@Prachi:~/LBHW$ 

	*/
