#include<stdio.h>

int AdditionI(int no)
{
	int sum=0;
	int icnt=1;
	
	while(icnt<=no)
	{
		sum=sum+icnt;
		icnt++;
	}
	return sum;
}

int main()
{
	int ivalue=0;
	int ret =0;
	printf("Enter number : \n");
	scanf("%d",&ivalue);
	
	ret=AdditionI(ivalue);
	printf("Addition is : %d\n",ret);
	
	return 0;
}
