#include<stdio.h>

int Factorial(int no)
{
	static int sum=1;
	static int icnt=1;
	
	if(icnt<=no)
	{
		sum=sum*icnt;
		icnt++;
		Factorial(no);
	}
	return sum;
}

int main()
{
	int ivalue=0;
	int ret =0;
	printf("Enter number : \n");
	scanf("%d",&ivalue);
	
	ret=Factorial(ivalue);
	printf("Addition is : %d\n",ret);
	
	return 0;
}
