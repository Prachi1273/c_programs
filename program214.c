#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT no,UINT pos)
{
	UINT imask=0x00000001;
	UINT Res =0;
	
	if(pos<1 || pos >32)
	{
		printf("Invalid position ,it should be in between 1 to 32");
		return false;
	}
	
	imask= imask << (pos - 1);
	
	Res=no&imask;
	
	if(Res==imask)
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
	UINT value =0,pos=0;
	bool bret=false;
	
	printf("Enter number :\n");
	scanf("%d",&value);
	
	printf("Enter the position of bit : ");
	scanf("%d",&pos);
	
	bret=CheckBit(value,pos);
	
	if(bret==true)
	{
		printf("Bit at poition %d is on\n",pos);
	}
	else
	{
		printf("Bit at poition %d is off\n",pos);
	}
	
	return 0;
}
