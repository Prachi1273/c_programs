#include<stdio.h>

void SparseMatrix(int r,int c,int arr[r][c])
{
	int i=0,j=0,cnt = 0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]!=0)
			{
				cnt++;
			}
		}
	}
	printf("\n---------------------------------------\n");
	printf("SPARSE MATRIX IMPLEMENTATION\n");
	printf("---------------------------------------\n\n");
	printf("[%d\t%d\t%d]\n",r,c,cnt);
	printf("--------------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]!=0)
			{
				printf("[%d\t%d\t%d]\n",i,j,arr[i][j]);
			}
		}
	}
}

int main()
{
	int r = 0,c = 0,i=0, j=0;
	
	printf("\nEnter number of rows for sparse natrix : ");
	scanf("%d",&r);
	
	printf("Enter number of columns for sparse natrix : ");
	scanf("%d",&c);
	printf("\n");
	int arr[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Matrix[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	SparseMatrix(r,c,arr);
	
	return 0;
}
