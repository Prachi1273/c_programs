#include<stdio.h>
#define max 20

int main()
{
	int i,n,bt[max],at[max],wt[max],tat[max],temp[max];
	float awt=0.0,atat=0.0;
	
	printf("Enter no. of processes : ");
	scanf("%d",&n);
	
	printf("Enter burst time : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	
	printf("Enter arrival time : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	temp[0]=0;
	printf("\npno\tburst time\tarrival time\twaiting time\tturn around time\n");
	printf("---------------------------------------------------------------------------\n");
	
	for(i=0;i<n;i++)
	{
		wt[i]=0;
		tat[i]=0;
		temp[i+1]=temp[i]+bt[i];
		wt[i]=temp[i]-at[i];
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		
		printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],at[i],tat[i]);
	}
	awt=awt/n;
	atat=atat/n;
	printf("Average waiting time : %lf\n Average turn around time : %lf\n",awt,atat);
	
	return 0;
}
