#include<stdio.h>
#include"s1cs2.h"

int main()
{
	stack s1,s2,t;
	int i =0,n=0,ele=0;
	
	init(&s1);
	init(&s2);
	init(&t);
	
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&ele);
		push(&s1,ele);
	}
	
	while(!isempty(&s1))
	{
		push(&t,pop(&s1));
	}
	
	while(!isempty(&t))
	{
		push(&s1,peek(&t));
		push(&s2,pop(&t));
	}
	
	printf("\n-----Elements of stack1 is copied in stack2------\n");
     
     	printf("Element in stack2 are : \n");
     	
     	for(i=0;i<n;i++)
     	{
     		printf("%c\t",pop(&s2));
     		//push(&s2,ele);
     	}
	
	return 0;
}
