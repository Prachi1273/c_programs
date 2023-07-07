#include<stdio.h>
#include<stdlib.h>

void selectionsort(int ino,int*arr)
{
	int i = 0,j=0,temp,icnt,min;
	for(i=0;i<ino;i++)
	{
		min=i;
		for(j=i+1;j<ino;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp = arr[i];
		arr[i]=arr[min];
		arr[min]=temp;	
	}
	printf("after sorting\n");
	for(icnt=1;icnt<=ino;icnt++)
	{
		printf("%d\n",arr[icnt]);
	}
}

int main()
{
	int ino = 0,i=0;
	printf("Enter the no. of elements : ");
	scanf("%d",&ino);
	int*arr =(int*)malloc(ino*sizeof(int));
	printf("Enter  elements : \n");
	for(i=0;i<ino;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	selectionsort(ino,arr);
	
	return 0;
}
