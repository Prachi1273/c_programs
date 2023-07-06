#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

// 0000	0000	0000	0000	0000	0010	0000	0000	
//	1111	1111	1111	1111	1111	1111	1111	0111
//0xfffffff7

UINT OffBit(UINT no)
{
	UINT imask= 0xfffffff7;
	
	return(no&imask);
}

int main()
{
	UINT value =0;
	UINT iret=false;
	
	printf("Enter number :\n");
	scanf("%d",&value);
	
	iret=OffBit(value);
	
	printf("Updataed number is : %d\n",iret);
	
	return 0;
}
