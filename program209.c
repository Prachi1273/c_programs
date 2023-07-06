#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT no)
{
	UINT iMask = 512;
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
