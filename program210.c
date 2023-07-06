#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

/*
	create hex number for mask
	first write 32 0's 
	count rigth to left
	e.g. check 10th bit is on?
	so  write hex number for that 4 grp of numbers
	here hex no. for 0010 is 2
	hence there is 2
	then write 0x to previous of no. 
	0x00000200
*/	
// 0000	0000	0000	0000	0000	0010	0000	0000
// 0		0	0	0	0	2	0	0
//0x00000200

// 0000	0000	0000	0000	0000	1000	0000	0000
// 0		0	0	0	0	8	0	0
//0x00000800

//0000	0000	0000	0000	0000	0001	1100	0000
// 0		0	0	0	1	C	0	0
//0x000001C0

bool CheckBit(UINT no)
{
	UINT iMask = 0x00000200;
	UINT Res =0;
	
	Res=no & iMask;
	
	if(Res==iMask)
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
	UINT value =0;
	bool bret=false;
	
	printf("Enter number :\n");
	scanf("%d",&value);
	
	bret=CheckBit(value);
	
	if(bret==true)
	{
		printf("10h bit is on\n");
	}
	else
	{
		printf("10th bit is off\n");
	}
	
	return 0;
}
