#include<stdio.h>
#include<stdlib.h>

void display(int* arr,int ino)
{
	printf("Enter values : \n");
	int i =0;
	for(i=0;i<ino;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void bubblesort(int* arr,int ino)
{
	int i=0,j=0,temp=0;
	for(int i=0;i<ino-1;i++)
	{
		for(j=0;j<ino-1-i;j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
			
		}
	}
	printf("after sorting : \n");
	int icnt =0;
	for(icnt=0;icnt<ino;icnt++)
	{
		printf("%d\n",arr[icnt]);
	}
}

int main()
{
	int ino;
	printf("Enter size : \n");
	scanf("%d",&ino);
	
	int*arr = (int*)malloc(ino*sizeof(int));
	
	display(arr,ino);
	
	bubblesort(arr,ino);
	
	return 0;
}
