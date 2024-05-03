#include<stdio.h>
#define max 20

int f,r,frames[max],pg[max],faults,mem[max][max],sp=0,count[max];

void accept()
{
	int i=0;
	printf("Enter no. of frames : ");
	scanf("%d",&f);
	printf("Enter no. of pages : ");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		printf("%d = ",i+1);
		scanf("%d",pg[i]);
	}
}

int search(int pg)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(frames[i]==pg)
		return i;
	}
	return -1;
}

void display()
{
	int i=0,j=0;
	for(i=0;i<r;i++)
	{
		printf("%3d",pg[i]);
	}
	print("\n\n");
	for(i=0;i<f;i++)
	{
		for(j=0;j<r;i++)
		{
			if(mem[i][j])
			{
				printf("%3d",mem[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
	}
}

void fifo()
{
	int i=0,j=0;
	for(i=0;i<r;i++)
	{
		if(search(ref[i])==-1)
		{
			frames[sp]=ref[i];
			sp=(sp+1)%n;
			faults++;
			
		}
		for(j=0;j<f;j++)
		{
			mem[j][i]=frames[j];
			
		}
	}
}

int get_lfu(int sp)
{
 int i,min_i,min=9999;

 i=sp;
 do
 {
  if(count[i]<min)
  {
   min = count[i];
   min_i = i;
  }
  i=(i+1)%n;
 }while(i!=sp);

 return min_i;
}


void lfu()
{
 int i,j,k;

 for(i=0;i<m && sp<n;i++)
 {
  k=search(ref[i]);
  if(k==-1)
  {
   frames[sp]=ref[i];
   count[sp]++;
   faults++;
   sp++;

   for(j=0;j<n;j++)
    mem[j][i]=frames[j];
  }
  else
   count[k]++;
  
 }

 sp=0;
 for(;i<m;i++)
 {
  k = search(ref[i]);
  if(k==-1)
  {
   sp = get_lfu(sp);
   frames[sp] = ref[i];
   count[sp]=1;
   faults++;
   sp = (sp+1)%n;

   for(j=0;j<n;j++)
    mem[j][i] = frames[j];
  }
  else
   count[k]++;
 }
}

void lru()
{
	int i=0,j=0,k=0;
	for(i=0;i<r && sp<f;i++)
	{
		k=search(ref[i]);
		if(k==-1)
		{
			frames[sp]=ref[i];
			count[sp]=i;
			faults++;
			sp++;
			for(j=0;j<f;j++)
			{
				mem[j][i]=frames[j];
			}
		}
		else
		{
			count[k]=i;
		}
	}
	sp=0;
	for(;i<r;i++)
	{
		k=search(ref[i]);
		if(k==-1)
		{
			sp=get_lru(sp);
			frames[sp]=ref[i];
			count[sp]=i;
			faults++;
			for(j=0;j<f;j++)
			{
				mem[j][i]=frames[j];
			}
		}
		else
		{
			count[k]=i;
		}
		
	}
}

void mfu()
{
	int k,i,j;
	for(i=0;i<r && sp<f;i++)
	{
		k=search(ref[i]);
		if(k==-1)
		{
			frames[sp]=ref[i];
			count[sp]++;
			faults++;
			sp++;
			for(j=0;j<f;j++)
			{
				mem[j][i]=frames[j];
			}
		}
		else{
			count[k]++;
			}
	}
	sp=0;
	for(;i<r;i++)
	{
		k=search(ref[i]);
		if(k==-1)
		{
			sp=get_mfu(sp);
			frames[i]=ref[i];
			faults++;
			count[sp]=1;
			sp=(sp+1)%n;
			for(j=0;j<f;j++)
			{
				mem[j][i]=frames[j];
			}
		}
		else
		{
			count[k]++;
		}
	}
}

int get_lru()
{
	int i,min=9999,min_i;
	i=sp;
	do
	{
		if(count[i]<min)
		{
			min=count[i];
			min_i=i;
		}
		i=(i+1)%n;
	}while(i!=sp);
	return min_i;
}

int get_mfu()
{
	int max_i,i,max=-9999;
	i=sp;
	do
	{
		if(count[i]>max)
		{
			max=count[i];
			max_i=i;
		}
		i=(i+1)%n;
	}while(i!=sp);
	return max_i;
}

int main()
{
	return 0;
}
