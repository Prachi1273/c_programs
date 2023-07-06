#include<stdio.h>
#include<stdbool.h>

int CountDigitR(int no)
{
	static int icnt =0;
	
	if(no!=0)
	{
		icnt++;
		no=no/10;
		CountDigitR(no);
	}
	return icnt;
}

int main()
{
	int ivalue=0;
	int iret=0;
	printf("Enter number : \n");
	scanf("%d",&ivalue);
	
	iret=CountDigitR(ivalue);
	printf("Number of digits are : %d\n",iret);
	
	return 0;
}
