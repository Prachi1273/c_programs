#include<stdio.h>
#include<stdlib.h>

int CountSmall(char crr[20])
{
	int i=0,sml=0;
	
	while(crr[i]!='\0')
	{
		if((crr[i]>='a') && (crr[i]<='z'))
		{
			sml++;
		}
		i++;
	}
	return sml;
}

int main()
{
	char crr[20];
	int cret =0;
	
	printf("Enter String : ");
	scanf("%[^'\n']s",crr);
	
	cret = CountSmall(crr);
	
	printf("No. of small caracters are : %d\n",cret);
	
	return 0;
}
