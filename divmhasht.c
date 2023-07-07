#include<stdio.h>
#include<stdlib.h>

#define tablesize 10

int h[tablesize]={};

void insert()
{
	int ele,key,i,index;
	printf("Enter element to be inserted : ");
	scanf("%d",&ele);
	
	key=ele%tablesize;
	for(i=0;i<tablesize;i++)
	{
		index=(key+i )% tablesize;
		if(h[index]==0)
		{
			h[index]=ele;
			break;
		}
		else
		{
			printf("collision\n");
		}
		
	}
	if(i==tablesize)
			printf("element cnnot be inserted \n");
}

void search()
{
	int ele,key,i,index;
	printf("Enter element to be searched : ");
	scanf("%d",&ele);
	
	key=ele%tablesize;
	for(i=0;i<tablesize;i++)
	{
		index=(key+i )% tablesize;
		if(h[index]==ele)
		{
			printf("Element found is %d",ele);;
			break;
		}
	}	
		if(i==tablesize)
			printf("element not found \n");
	
}

void display()
{
	int i;
	for(i=0;i<tablesize;i++)
	{
		printf("At position %d element found is %d ",i,h[i]);
	}
}

int main()
{
	int ch;
	
	while(1)
	{
		printf("\n 1. insert\n2. display\n3.search\n4. exit \nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				search();
				break;
			case 4 : exit(0);
		}
	}
	
	return 0;
}
