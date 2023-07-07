#include<stdio.h>
#include<stdlib.h>
/*
void Display(int *arr,int n)
{
	int i =0;
	
	for(i=1;i<=n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void InsertionSort(int *arr,int n)
{
	int i ,j ,ele ;
	
	for(i = 0;i<= n-1;i++)
	{
		ele = arr[i];
		j =i-1;
		while(j>=0 && arr[j]>ele)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = ele;
	}
	
	int icnt =0;
	
	for(icnt=1;icnt<=n;icnt++)
	{
		printf("%d\t",arr[icnt]);
	}
	printf("\n");
}

int main()
{
	int iNo = 0,i =0;
	
	printf("Enter the no. of elements :");
	scanf("%d",&iNo);
	
	int* arr = (int*)malloc(iNo*sizeof(int));
	
	for(i = 0;i<=iNo;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	InsertionSort(arr,iNo);
	
	//printf("Array after sorting : ");
	
	//Display(arr,iNo);
	
	return 0;
}*/

void Insertionsort(int* arr,int n)
{
	int i =0,j=0;
	for(i=0;i<n-1;i++)
	{
		int ele = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>ele)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=ele;
	}
	
	printf("After sorting : \n");
	int icnt =0;
	for(icnt=0;icnt<n;icnt++)
	{
		printf("%d\t",arr[icnt]);
	}	
	printf("\n");
}

int main()
{
	int n = 0,i=0;
	
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	
	int*arr = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	Insertionsort(arr,n);
}
