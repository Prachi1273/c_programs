#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fcfs(int reqn,int req[],int head)
{
	int i=0,d=0,thm=0;
	for(i=0;i<reqn;i++)
	{
		d = abs(head-req[i]);
		thm = thm+d;
		head=req[i];
	}
	return thm;
}

int main()
{
	int cyl=0,reqn=0,i=0,head=0,thm = 0;
	
	printf("Enter total no. of cylinders : ");
	scanf("%d",&cyl);
	
	printf("Enter total no. of request : ");
	scanf("%d",&reqn);
	
	int req[reqn];
	
	printf("Enter requests : ");
	for(i=0;i<reqn;i++)
	{
		scanf("%d",&req[i]);
	}
	
	printf("Enter current head position : ");
	scanf("%d",&head);
	
	thm = fcfs(reqn,req,head);
	
	printf("Total Head movement = : %d \n",thm);
	
	return 0;
}

/*
void sstf()
{
    int min,diff;
    int pending=no_req;
    int i,distance=0,index;
    head=head1;
  
    for(i=0;i<no_req;i++)
    {
        finish[i]=0;
    }

    printf("\n%d=>",head);
    
    while(pending>0)
    {   min=9999;
    
        for(i=0;i<no_req;i++)
        {
            diff=abs(head-disc_req[i]);
            if(finish[i]==0 && diff<min)
            {
                min=diff;
                index=i;
            }
        }
        finish[index]=1;
        distance+=abs(head-disc_req[index]);
        head=disc_req[index];
        pending--;
        printf("%d=>",head);
    }
    printf("End");
    printf("\n\n Total Distance Traversed=%d",distance);
}
*/
