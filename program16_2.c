#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Check(int ino,int*arr,int ele)
{
	int i=0,freq=0;
	for(i=0;i<ino;i++)
	{
		while(arr[i]!=ele)
		{
			i++;
		}
		return i;
		break;	
		
	}
}

int main()
{
	int ino =0,i=0,ele=0;
	int iret=0;
	
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
	printf("Index of first occurence of %d is %d\n",ele,iret);
	
	return 0;
}

/*
	Result:
prachi@Prachi:~/LBHW$ ./program16_2exe
Enter no. of  elements : 5
Enter elements : 
21
11
51
111
51
Enter element to be search 
51
Index of first occurence of 51 is 2

*/
