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

void insertionsort(int* arr,int ino)
{
	int i=0,j=0,ele,icnt;
	for(i=0;i<ino-1;i++)
	{
		j=i+1;
		ele=arr[i];
		while(j>=0 && arr[j]>ele)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=ele;
	}
	for ( icnt = 0; icnt < ino; icnt++)
    {
        printf("%d\n ", arr[icnt]);
    }
}

int main()
{
	int ino;
	printf("Enter size : \n");
	scanf("%d",&ino);
	
	int*arr = (int*)malloc(ino*sizeof(int));
	
	display(arr,ino);
	
	insertionsort(arr,ino);
	
	return 0;
}
