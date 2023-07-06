#include<stdio.h>
#include<stdlib.h>

int CountCaps(char crr[20])
{
	int i=0,cap=0;
	
	while(crr[i]!='\0')
	{
		if((crr[i]>='A') && (crr[i]<='Z'))
		{
			cap++;
		}
		i++;
	}
	return cap;
}

int main()
{
	char crr[20];
	int cret =0;
	
	printf("Enter String : ");
	scanf("%[^'\n']s",crr);
	
	cret = CountCaps(crr);
	
	printf("No. of capital caracters are : %d\n",cret);
	
	return 0;
}
