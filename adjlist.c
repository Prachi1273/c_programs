#include<stdio.h>
#include<stdlib.h>

int graph[10][10];

struct node
{
	int data;
	struct node*next;
};

struct node*head[10],*temp;

void adjmatrix_list(int n)
{
	int i=0,j=0;
	
	for(i=0;i<n;i++)
	{
		graph[i][i]=0;
		for(j=0;j<n;j++)
		{
			printf("is there any edge between v%d and v%d",i+1,j+1);
			scanf("%d",&graph[i][j]);
		}
	}
	printf("adjacency matrix \n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",graph[i][j]);
		}
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
					head[i]=newnnode;
					temp=newnode;
				}
				else
				{
					temp->next=newnode;
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
	int n;
	printf("how many vertices ? ");
	scanf("%d",&n);
	adjmatrix_list(n);
	
	return 0;
}
