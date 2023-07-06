#include<stdio.h>

void pattern(int ino1,int ino2)
{
	char ch='A',ch1='a';
	int i=0,j=0;
	for(i=0;i<ino1;i++)
	{
		for(j=0;j<ino2;j++,ch++)
		{
			if(i%2==0)
			{
			printf("%c\t",ch);
			}
			else
			{
				printf("%c\t",ch1);
				ch1++;
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
A	B	C	D	
a	b	c	d	
I	J	K	L	
e	f	g	h*/
