#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

void Display(int* arr,int iValue)
{
	int i = 0;
	for(i = 1;i<=iValue;i++)
	{
		printf("%d\n",arr[i]);
	}
}

void BubbleSort(int *arr,int iValue)
{
	int i =0,j =0,temp = 0;
	
	for(i = 0;i<=iValue-1;i++)
	{
		for(j = 0;j<=iValue-1-i;j++)
		{
			if(arr[j+1] < arr[j])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	int icnt = 0;
	for(icnt = 1;icnt<=iValue;icnt++)
	{
		printf("%d\n",arr[icnt]);
	}
}

int main()
{
	int iValue = 0,i = 0;
	
	printf("Enter no. of elements : ");
	scanf("%d",&iValue);
	
	int *arr = (int*)malloc(iValue*sizeof(int));
	printf("Enter  elements : ");
	for(i = 1;i<=iValue;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array before sorting :\n");
	Display(arr,iValue);
	printf("Array after sorting :\n");
	BubbleSort(arr,iValue);	
	
	return 0;
}
