#include<stdio.h>

void FactorsI(int no)
{
	int icnt=0;
	for(icnt=1;icnt<=(no/2);icnt++)
	{
		if(no%icnt==0)
		{
			printf("%d\n",icnt);
		}
	}
}

int main()
{
	int ivalue=0;

	printf("Enter number : \n");
	scanf("%d",&ivalue);
	
	FactorsI(ivalue);
	
	return 0;
}
