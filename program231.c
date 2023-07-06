#include<stdio.h>
#include<stdbool.h>

int CountDigitI(int no)
{
	int icnt =0;
	
	while(no!=0)
	{
		icnt++;
		no=no/10;
	}
	return icnt;
}

int main()
{
	int ivalue=0;
	int iret=0;
	printf("Enter number : \n");
	scanf("%d",&ivalue);
	
	iret=CountDigitI(ivalue);
	printf("Number of digits are : %d\n",iret);
	
	return 0;
}
