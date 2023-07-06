#include<stdio.h>
#include<stdbool.h>

bool FactorsR(int no)
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
	if(sumf==no)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int ivalue=0;
	bool bret=0;
	printf("Enter number : \n");
	scanf("%d",&ivalue);
	
	printf("Factors are : \n");
	bret=FactorsR(ivalue);
	
	if(bret==true)
	{
		printf("Number is perfect \n");
	}
	else
	{
		printf("Number is not perfect\n");
	}
	
	return 0;
}
