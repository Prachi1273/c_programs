#include<stdio.h>
#include<stdlib.h>

void generate(int* arr,int size)
{
	int i =0;
	for(i=0;i<size;i++)
	arr[i] = rand()%100;
}

void display(int* arr,int size)
{
	int i =0;
	while(i<size)
	{
		printf("%d\n",arr[i]);
		i++;
	}
}

int accept()
{
	int no=0;
	printf("Enter element to be searched : ");
	scanf("%d",&no);
	return no;
}

int linearsearch(int *arr,int size,int a)
{
	int i =0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==a)
		{
			return i;
		}
		else
		{
			return 0;
		}
	}	
}

int main()
{
	int size =0,arr[50],a,ls;
	printf("Enter no. of elements : ");
	scanf("%d",&size);
	generate(arr,size);
	display(arr,size);
	a = accept();
	ls=linearsearch(arr,size,a);
	if(ls==-1)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d found at pos %d\n",a,ls+1);
	}
	return 0;
}
