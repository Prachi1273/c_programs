#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Check(int ino,int*arr)
{
	int i=0,freq=0;
	for(i=0;i<ino;i++)
	{
		while(arr[i]!=11)
		{
			i++;
		}
		freq++;			
		
	}
	return freq;
}

int main()
{
	int ino =0,i=0;
	int iret=false;
	
	printf("Enter no. of  elements : ");
	scanf("%d",&ino);
	
	int *arr=(int*)malloc(ino*sizeof(int));
	printf("Enter elements : \n");
	for(i=0;i<ino;i++)
	{
		scanf("%d",&arr[i]);
	}
	iret=Check(ino,arr);
	printf("Frequency of %d is %d\n",11,iret);
	
	return 0;
}

/*
	Result:
	prachi@Prachi:~/LBHW$ ./program15_4exe
Enter no. of  elements : 4
Enter elements : 
21
11
51
11
Frequency of 11 is 2
		
*/
