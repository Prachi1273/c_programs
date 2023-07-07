#include<stdio.h>

int q[100];
int f=-1,r=-1;

void enqueue(int data,int no)
{
	if(r==no-1)
	{
		printf("Queue is full\n");
		return ;
	}
	else if(f==-1&&r==-1)
	{
		f=r=0;
		q[r]=data;
	}
	else
	{
		r++;
		q[r]=data;
	}
}

void reverse()
{
	int temp=0,i=0,j=0,icnt=0;
	for(i=f,j=r;i<j;i++,j--)
	{
		temp = q[i];
		q[i] = q[j];
		q[j] = temp;
	}
	
	printf("Queue after reverse : \n");
	
	for(icnt=f;icnt<=r;icnt++)
	{
		printf("%d\n",q[icnt]);
	}
	
}

int main()
{
	int n=0,t=0,i=0;
	
	printf("Enter size of queue : ");
	scanf("%d",&n);
	
	printf("Enter elements : \n");
	
	while(i<n){
		scanf("%d",&t); 
		enqueue(t,n);
		i++;
	}
	
	reverse();
	
	return 0;
}
