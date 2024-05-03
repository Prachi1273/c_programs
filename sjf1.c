#include<stdio.h>

struct process
{
	int at,bt,ct,tat,wt;
};

void findsjf(struct process p[],int n)
{
	int i=0;
	int temp[n];
	for(i=0;i<n;i++)
	{
		temp[i]=p[i].bt;
	}
	int exitt=0,minbt=9999,complete=0,shortn=0;
	while(complete<n)
	{
		minbt=9999;
		for(i=0;i<n;i++)
		{
			if(p[i].at<=exitt && temp[i]<minbt && temp[i]>0)
			{
				temp[i]=minbt;
				shortn=i;
			}
		}
		temp[shortn]--;
		if(temp[shortn]==0)
		{
			complete++;
			p[shortn].ct=exitt+1;
			p[shortn].tat=p[shortn].ct-p[shortn].at;
			p[shortn].wt=p[shortn].tat-p[shortn].bt;
		}
		exitt++;
	}
}

void Display(struct process p[],int n)
{
	int i=0;
	printf("\npid\tburst time\tarrival time\tcurrent time\tturn around time\twaiting time\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,p[i].bt,p[i].at,p[i].ct,p[i].tat,p[i].wt);
	}
}

int main()
{
	int i,n;

	printf("Enter no. of processes : ");
	scanf("%d",&n);
	
	struct process p[n];
	
	for(i=0;i<n;i++)
	{
		printf("process %d ",i+1);
		printf("Enter burst time : ");
		scanf("%d",&p[i].bt);
		printf("Enter arrival time : ");
		scanf("%d",&p[i].at);
	}
	
	findsjf(p,n);
	Display(p,n);
	
	return 0;
}
