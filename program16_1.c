#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Check(int ino,int*arr,int ele)
{
	int i=0,freq=0;
	for(i=0;i<ino;i++)
	{
		while(arr[i]!=ele)
		{
			i++;
		}
		return 1;
			
		
	}
}

int main()
{
	int ino =0,i=0,ele=0;
	bool bret=false;
	
	printf("Enter no. of  elements : ");
	scanf("%d",&ino);
	
	int *arr=(int*)malloc(ino*sizeof(int));
	printf("Enter elements : \n");
	for(i=0;i<ino;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be search \n");
	scanf("%d",&ele);
	bret=Check(ino,arr,ele);
	if(bret==1)
	{
		printf("%d is found \n",ele);
	}
	else
	{
		printf("%d is NOT found \n",ele);
	}
	
	return 0;
}

/*
	Result:
Enter no. of  elements : 4
Enter elements : 
21
51
211
151
Enter element to be search 
21
21 is found

*/
