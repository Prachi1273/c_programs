#include<stdio.h>
#include <stdlib.h>

void generate(int*arr,int n)
{
	int i = 0;
	for(i=0;i<n;i++)
		arr[i] = rand()%100;
	
}

int accept(int *arr,int n)
{
	int ivalue = 0;
	printf("Enter the number to be search : ");
	scanf("%d",&ivalue);
	return ivalue;
}

int ls(int*arr,int n,int acc)
{
	int i =0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==acc)
		{
			return i;
		}
		else
		{
		return -1;
		}
	}
}

void display(int num[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
}

int main()
{
	int n = 0,i = 0,acc = 0,pos =0;
	
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	
	int*arr;
	
	generate(arr,n);
	
	display(arr,n);
	
	acc = accept(arr,n);
	
	pos = ls(arr,n,acc);
	if(pos==-1)
	{
		printf("its wrong\n");
	}
	else
	{
		printf("%d found at position %d\n",acc,pos);
	}
	
	return 0;
}
