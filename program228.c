#include<stdio.h>

void FactorsR(int no)
{
	static int icnt=1;
	if(icnt<=(no/2))
	{
		if(no%icnt==0)
		{
			printf("%d\n",icnt);
		}
		icnt++;
		FactorsR(no);
	}
}

int main()
{
	int ivalue=0;

	printf("Enter number : \n");
	scanf("%d",&ivalue);
	
	FactorsR(ivalue);
	
	return 0;
}
