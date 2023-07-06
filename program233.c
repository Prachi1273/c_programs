#include<stdio.h>
#include<stdbool.h>

int SumDigitR(int no)
{
	static int isum =0;
	int idigit=0;
	if(no!=0)
	{
		idigit=no%10;
		isum=isum+idigit;
		no=no/10;
		SumDigitR(no);
	}
	return isum;
}

int main()
{
	int ivalue=0;
	int iret=0;
	printf("Enter number : \n");
	scanf("%d",&ivalue);
	
	iret=SumDigitR(ivalue);
	printf("Number of digits are : %d\n",iret);
	
	return 0;
}
