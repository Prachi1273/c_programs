#include<stdio.h>

int graph[10][10];

int main()
{
	int n=0,i=0,j=0,outd=0,ind=0,totald=0;
	
	printf("Enter how many vertices : ");
	scanf("%d",&n);
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
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(graph[i][j]==1)
			{
				outd++;
			}
			
			if(graph[j][i]==1)
			{
				ind++;
			}
			
			totald=ind+outd;
		}
		printf("\nv%d=>indegree:  %d , outdegree : %d , total degree :  %d\n",i+1,ind,outd,totald);
	}
	printf("\n adjacency matrxi : \n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d\t",graph[i][j]);
			
	}
}

