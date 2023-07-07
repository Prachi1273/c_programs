#include<stdio.h>

int no[100];

int top = -1;

void push(int x)
{
	no[++top]=x;
}

int pop()
{
	return no[top--];
}

int main()
{
	char*ch;
	char arr[100];
	int n1,n2,n3,num;
	printf("Enter expression :: ");
	scanf("%d",arr);
	
	ch = arr;
	
	while(*ch != '\0')
	{
		if(isdigit(*ch))
		{
			num = *ch-48;
			push(num);
		}
		else
		{
			n1 =pop();
			n2 = pop();
			
			switch(*ch)
			{
				case '+':
				{
					n3 = n1+n2;
					break;
					}
					
				case '-':{
					n3 = n2-n1;
					break;}
					
				case '*':{
					n3 = n1*n2;
					break;}
					
				case '/':{
					n3 = n1/n2;
					break;}
			}
			push(n3);
		}
		ch++;
	}
	printf("the result of expression %s = %d\n",arr,pop());
	
	return 0;
}
