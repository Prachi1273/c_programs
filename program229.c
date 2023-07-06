#include<stdio.h>

int FactorsR(int no)
{
	static int icnt=1;
	static int sumf=0;
	if(icnt<=(no/2))
	{
		if(no%icnt==0)
		{
			printf("%d\n",icnt);
			sumf=sumf+icnt;
		}
		icnt++;
		
		FactorsR(no);
	}
	return sumf;
}

int main()
{
	int ivalue=0;
	int ret=0;
	printf("Enter number : \n");
	scanf("%d",&ivalue);
	
	printf("Factors are : \n");
	ret=FactorsR(ivalue);
	
	printf("Addition of factors is : %d\n",ret);
	
	return 0;
}
