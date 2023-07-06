#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void Check(int ino,int*arr,int start,int end)
{
	int i=0;
	for(i=0;i<ino;i++)
	{
		printf("Elements from range are : \n");
		if(arr[i]>=start && arr[i]<=end)
		{
			
			printf("%d\n",arr[i]);
		}

	}
}

int main()
{
	int ino =0,i=0,end=0,start=0;
	
	
	printf("Enter no. of  elements : ");
	scanf("%d",&ino);
	
	printf("Enter starting element  \n");
	scanf("%d",&start);
	
	printf("Enter ending element  \n");
	scanf("%d",&end);
	
	int *arr=(int*)malloc(ino*sizeof(int));
	printf("Enter elements : \n");
	for(i=0;i<ino;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	Check(ino,arr,start,end);
	
	
	return 0;
}

/*
	Result:
Enter no. of  elements : 6
Enter starting element  
50
Enter ending element  
90
Enter elements : 
51
32
78
90
11
62
Elements from range are : 
51
Elements from range are : 
78
Elements from range are : 
90
Elements from range are : 
62


*/
