#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

// 0000	0000	0000	0000	0000	0010	0000	0000	
//	1111	1111	1111	1111	1111	1111	1111	0111
//0xfffffff7

UINT OffBit(UINT no,UINT pos)
{
	UINT imask= 0x00000001;
	imask=imask<<(pos-1);
	
	imask= ~imask;
	
	return(no&imask);
	
}

int main()
{
	UINT value =0,pos=0;
	UINT iret=false;
	
	printf("Enter number :\n");
	scanf("%d",&value);
	
	printf("Enter position :\n");
	scanf("%d",&pos);
	
	iret=OffBit(value,pos);
	
	printf("Updataed number is : %d\n",iret);
	
	return 0;
}
