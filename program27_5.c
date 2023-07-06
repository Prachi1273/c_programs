#include<stdio.h>
#include<stdlib.h>

int countspace(char *arr)
{
	char*left=arr,*right=arr,temp='\0';
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
	printf("reversed string is : %s",arr);
}

int main()
{
	char arr[20],ch;
	int ret=0;
	
	printf("Enter string : ");
	scanf("%[^'\n']s",arr);
	
	ret = countspace(arr);
	
	return 0;
}
