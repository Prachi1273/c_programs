#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Reverse(char crr[20])
{
	char *left=crr,*right=crr;
	char temp='\0';
	while(*right!='\0')
	{
		right++;
	}
	right--;
	
	while(left<right)
	{
		temp=*left;
		*left=*right;
		*right=temp;
		
		left++;
		right--;
	}
	printf("reversed string is : %s",crr);
}

int main()
{
	char crr[20];
	bool cret =false;
	
	printf("Enter String : ");
	scanf("%[^'\n']s",crr);
	
	Reverse(crr);
	
	return 0;
}
