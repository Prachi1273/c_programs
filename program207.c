#include<stdio.h>

typedef unsigned int UINT;

int CountOnBits(UINT No)
{
	int iCnt=0;
	int digit=0;
	
	while(No!=0)
	{
		digit=No%2;
		iCnt=iCnt+digit;
		No=No/2;
	}
	return iCnt;
}

int main()
{
	UINT value =0;
	int iret=0;
	printf("Enter number :\n");
	scanf("%d",&value);
	
	iret=CountOnBits(value);
	printf("Number of bits are ON are : %d\n",iret);
	
	return 0;
}
