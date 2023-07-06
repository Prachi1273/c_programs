#include<stdio.h>

void DisplayBinary(unsigned int no)
{
	int Digit =0;
	
	while(no!=0)
	{
		Digit=no%2;
		printf("%d",Digit);
		no=no/2;
	}
	printf("\n");
}

int main()
{
	unsigned int value =11;
	printf("Value in binary format \n");
	DisplayBinary(value);
	
	printf("Value in decimal format %d\n",value);
	printf("Value in octal format %o\n",value);
	printf("Value in hexadecimal format %x\n",value);
	
	return 0;
}
