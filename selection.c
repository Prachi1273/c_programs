#include<stdio.h>
#include<stdlib.h>

void display(int* arr,int ino)
{
	int i =0;
	printf("Enter values : \n");
	for(i=0;i<ino;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void selectionsort(int* arr,int ino)
{
	int icnt = 0,j=0,min=0,t;
	for(icnt = 0;icnt<ino;icnt++)
	{
		min=icnt;
		for(j=icnt+1;j<ino;j++)
		{
			if(j>=0 && arr[j] < arr[min])
			{
				min = j;
			}
		}
		t = arr[icnt];
		arr[icnt] = arr[min];
		arr[min] = t;
	}
	printf("Enter values : \n");
	int i =0;
	for(i=0;i<ino;i++)
	{
		printf("%d\n",arr[i]);
	}
}

int main()
{
	int ino = 0;
	printf("Enter size : \n");
	scanf("%d",&ino);
	
	int*arr = (int*)malloc(ino*sizeof(int));
	
	display(arr,ino);
	
	selectionsort(arr,ino);
}
