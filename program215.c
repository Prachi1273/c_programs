#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT no,UINT pos1,UINT pos2)
{
	UINT imask1=0x00000001;
	UINT imask2=0x00000001,imask;
	UINT Res =0;
	
	if(pos2<1 || pos1 >32 || pos1<1 || pos2 >32)
	{
		printf("Invalid position ,it should be in between 1 to 32");
		return false;
	}
	
	imask1= imask1 << (pos1 - 1);
	imask2= imask2 << (pos2 - 1);
	
	imask = imask1 | imask2;
	
	Res=no & imask;
	
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
	UINT value =0,pos1=0,pos2=0;
	bool bret=false;
	
	printf("Enter number :\n");
	scanf("%d",&value);
	
	printf("Enter the position1 of bit : ");
	scanf("%d",&pos1);
	
	printf("Enter the position2 of bit : ");
	scanf("%d",&pos2);
	
	bret=CheckBit(value,pos1,pos2);
	
	if(bret==true)
	{
		printf("Bit at poition %d & %d is on\n",pos1,pos2);
	}
	else
	{
		printf("Bit at poition %d & %d is off\n",pos1,pos2);
	}
	
	return 0;
}
