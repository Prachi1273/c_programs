#include<stdio.h>

int graph[10][10];

struct node
{
	int data;
	struct node*next;
};

struct node*head[10],*temp;

void adjmatrix(int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		graph[i][i]=0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				printf("is there any edge between v%d and v%d : ",i+1,j+1);
				scanf("%d",&graph[i][j]);
			}
		}
		
	}
	printf("\n adjacency matrxi : \n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d\t",graph[i][j]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(graph[i][j]!=0)
			{
				newnode=(struct node*)malloc(sizeof(struct node));
				newnode->data=j;
				newnode->next=NULL;
				if(head[i]==NULL)
				{
					head[i]=newnode;
					temp=newnode;
				}
				else
				{
					temp->next=node;
					temp=temp->next;
				}
			}
		}
	}
	printf("adjacency list\n");
	for(i=0;i<n;i++)
	{
		printf("v%d-->",i);
		for(temp=head[i];temp!=NULL;temp=temp->next)
		{
			printf("v%d-->",temp->data);
		}
	}
}

int main()
{
	int n=0;
	
	printf("How many vertices ?");
	scanf("%d",&n);
	
	adjmatrix(n);
}

/*
#include<stdio.h>

int graph[10[10];

int main()
{
	int n=0,i=0,j=0;
	printf(" how many vertices ?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		graph[i][i]=0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				printf("is there any edge between v%d and v%d(1 or 0)",i+1,j+1);
				scanf("%d",&graph[i][j]);
			}
		}
	}
	printf("adjacency matrix : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",graph[i][j]);
	}
	
}*/
