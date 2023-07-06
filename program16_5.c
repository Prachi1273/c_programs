#include<stdio.h>
#include<stdlib.h>

int product(int ino,int* arr)
{
	int i=0,mult=1;
	for(i=0;i<ino;i++)
	{
		if(arr[i]%2!=0)
		{
			mult=mult*arr[i];
		}
	}
	return mult;
}

int main()
{
	int ino=0,i=0,iret=0;
	printf("Enter no. of elements : \n");
	scanf("%d",&ino);
	
	int* arr=(int*)malloc(ino*sizeof(int));
	printf("Enter elements : \n");
	
	for(i=0;i<ino;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iret=product(ino,arr);
	printf("Multiplication of odd no.s is %d\n",iret);
	
	return 0;
}

/*

prachi@Prachi:~/LBHW$ gcc program16_5.c -o program16_5exe
prachi@Prachi:~/LBHW$ ./program16_5exe
Enter no. of elements : 
4
Enter elements : 
15
24
3
56
Multiplication of odd no.s is 45

