#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Check(int ino,int*arr,int ele)
{
	int i=0;
	for(i=0;i<ino;i++)
	{
	do
	{
		i++;
	}
	while(arr[i]!=ele);
	
	return i+1;
	}
	
}

int main()
{
	int ino =0,i=0,ele=0;
	int iret=false;
	
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
	iret=Check(ino,arr,ele);
	if(iret==0)
	{
		printf("%d is NOT present\n",ele);
	}
	else
	{
		printf("%d is present at position %d\n",ele, iret);
	}
	
	return 0;
}

/*
	Result:
	Enter no. of  elements : 4
Enter elements : 
11
21
51
121
Enter element to be search 
51
51 is present at position 3

		
*/
