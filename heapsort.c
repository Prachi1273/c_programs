/*
#include<stdio.h>
#include<stdlib.h>

void heapify(int*arr,int n ,int i)
{
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;'
	int temp;
	
	if(left < n && arr[left]>arr[largest])
		largest=left;
		
	if(right < n && arr[right]<arr[largest])
		largest=right;
		
	if(largest!=i)
	{
		temp=arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
		heapify(arr,n,largest);
	}
}

void heapsort(arr,n)
{
	int i,temp;
	for(i=n/2-1;i>=0;i--)
		heapify(arr,n,i);
		
	for(i=n-1;i>=0;i--)
	{
		temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		
		heapify(arr,i,0);
	}
}

void printheap(int *arr,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}

int main()
{
	int n=0,i=0;
	printf("Enter no. of nodes : ");
	scanf("%d",&n);
	int * arr=malloc(sizeof(n));
	printf("Enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	heapsort(arr,n);
	
}*/

#include<stdio.h>
#include<stdlib.h>

void heapify(int*arr,int n , int i)
{
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	int temp;
	
	if(left < n && arr[left]>arr[largest])
		largest=left;
		
	if(right < n && arr[right]>arr[largest])
		largest=right;
		
	if(largest != i)
	{
		temp=arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
		
		heapify(arr,n,largest);
	}
}

void heapsort(int*arr,int n)
{
	int i,temp;
	for(i=n/2-1;i>=0;i--)
		heapify(arr,n,i);
		
	for(i=n-1;i>=0;i--)
	{
		temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		
		heapify(arr,i,0);
	}
}

int main()
{
	int n=0,i=0;
	printf("Enter no. of nodes : ");
	scanf("%d",&n);
	int * arr=malloc(sizeof(n));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	heapsort(arr,n);
}






























