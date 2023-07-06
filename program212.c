#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

// 0000	0000	0000	0000	0000	0000	0000	0000	
//0000	0000	0000	0000	0000	0000	0000	1000	
//0x00000008

//0000	1010
//1111	0111
//0x11111101 
UINT ToggleBit(UINT no)
{
	UINT imask= 0x00000008;
	UINT ians=0;
	ians=no ^ imask;
	return ians;
}

int main()
{
	UINT value =0;
	UINT iret=false;
	
	printf("Enter number :\n");
	scanf("%d",&value);
	
	iret=ToggleBit(value);
	
	printf("Updataed number is : %d\n",iret);
	
	return 0;
}
