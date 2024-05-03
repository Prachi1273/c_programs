#include<stdio.h>
#include<stdbool.h>

struct process
{
	int at,bt,ct,wt,tat;
};

void findtat(struct process p[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		p[i].tat=p[i].wt+p[i].bt;
	}
}

void findwt(struct process p[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		p[i].wt=p[i].ct-p[i].at;
	}
}

void findqtime(struct process p[],int n,int q)
{
	int i=0,temp[n];
	for(i=0;i<n;i++)
	{
		temp[i]=p[i].bt;
	}
	int ctime=0;
	bool alldone=false;
	while(!alldone)
	{
		alldone=true;
		for(i=0;i<n;i++)
		{
			if(temp[i]>0)
			{
				alldone=false;
				if(temp[i]>q)
				{
					ctime=ctime+q;
					temp[i]=temp[i]-q;
				}
				else
				{
					ctime=ctime+temp[i];
					p[i].ct=ctime;
					temp[i]=0;
				}
			}
		}
	}
}

void display(struct process p[],int n)
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
	int i,n,quantum;

	printf("Enter no. of processes : ");
	scanf("%d",&n);
	printf("Enter quantum time : ");
	scanf("%d",&quantum);
	
	struct process p[n];
	
	for(i=0;i<n;i++)
	{
		printf("process %d ",i+1);
		printf("Enter burst time : ");
		scanf("%d",&p[i].bt);
		printf("Enter arrival time : ");
		scanf("%d",&p[i].at);
	}
	
	findtat(p,n);
	findwt(p,n);
	findqtime(p,n,quantum);
	display(p,n);
}
