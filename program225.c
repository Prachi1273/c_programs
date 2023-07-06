#include<stdio.h>

int AdditionR(int no)
{
	static int sum=0;
	static int icnt=1;
	
	if(icnt<=no)
	{
		sum=sum+icnt;
		icnt++;
		AdditionR(no);
	}
	return sum;
}

int main()
{
	int ivalue=0;
	int ret =0;
	printf("Enter number : \n");
	scanf("%d",&ivalue);
	
	ret=AdditionR(ivalue);
	printf("Addition is : %d\n",ret);
	
	return 0;
}
