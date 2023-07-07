#include<stdio.h>
#include<stdlib.h>

#define MAX 20
#define infinity 9999

int n,G[MAX][MAX],spanning[MAX][MAX];

int main()
{
	int i,j,totalcost;
	printf("Enter no. of vertices : ");
	scanf("%d",&n);
	printf("Enter adjacency matrix : \n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&G[i][j]);
			
	totalcost=prims();
}

int prims()
{
	int cost[MAX][MAX];
	int i,j,u,v,noofedges,mindistance,mincost;
	int visited[MAX],from[MAX],distance[MAX];
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(G[i][j]==0)
				cost[i][j]=infinity;
			else
				cost[i][j]=G[i][j];
			spanning[i][j]=0;
		}
	distance[0]=0;
	visited[0]=1;
	for(i=1;i<n;i++)
	{
		distance[0]=cost[0][i];
		from[i]=0;
		visited[i]=0;
	}
	mincost=0;
	noofedges=n-1;
	while(noofedges>0)
	{
		mindistance=infinity;
		
	}
	
}
