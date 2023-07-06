#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Check(int ino,int*arr,int ele)
{
	int i=0,freq=0;
	for(i=0;i<ino;i++)
	{
		do
		{
			i++;
		}while(arr[i]==ele);
			freq++;
			
		
	}
	return freq;
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
	printf("Frequency of %d is %d\n",ele,iret);
	
	return 0;
}

/*
	Result:
	prachi@Prachi:~/LBHW$ ./program15_5exe
Enter no. of  elements : 4
Enter elements : 
21
11
21
52
Enter element to be search 
21
Frequency of 21 is 2
		Enter no. of  elements : 5
Enter elements : 
31
22
11
22
41
Enter element to be search 
22
Frequency of 22 is 2

*/
