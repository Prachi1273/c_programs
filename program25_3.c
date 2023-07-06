#include<stdio.h>
#include<stdlib.h>

int Diffrence(char crr[20])
{
	int i=0,sml=0,cap=0,diff=0;
	
	while(crr[i]!='\0')
	{
		if((crr[i]>='a') && (crr[i]<='z'))
		{
			sml++;
		}
		else if((crr[i]>='A') && (crr[i]<='Z'))
		{
			cap++;
		}
		i++;
	}
	
	printf("No. of capital characters : %d\n",cap);
	printf("No. of small characters : %d\n",sml);
	
	if(cap>sml)
	{
		diff=cap-sml;
		printf("Diffrence is : %d\n",diff);
	}
	else if(cap<sml)
	{
		diff=sml-cap;
		printf("Diffrence is : %d\n",diff);
	}
	else if(cap==sml)
	{
		printf("Both are equal\nDiffrence is : %d\n",cap-sml);
	}
}

int main()
{
	char crr[20];
	int cret =0;
	
	printf("Enter String : ");
	scanf("%[^'\n']s",crr);
	
	Diffrence(crr);
	
	return 0;
}
