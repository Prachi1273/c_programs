#include<stdio.h>
#include<stdlib.h>

int countleaf=0,nonleaf=0,cnt=0;

struct treenode
{
	int data;
	struct treenode*lchild;
	struct treenode*rchild;
};

typedef struct treenode TREE;

void init(TREE**root)
{
	*root=NULL;
}

void insert(int data,TREE**root)
{
	TREE*temp=NULL;
	TREE*newnode=malloc(sizeof(TREE));
	newnode->data=data;
	newnode->lchild=newnode->rchild=NULL;
	
	if(*root==NULL)
	{
		*root=newnode;
	}
	else
	{
		temp=*root;
		if(data<root->data )
		{
			if( root->lchild==NULL)
			{
				root->lchild=newnode;
				break;	
			}
			else
			{
				temp=temp->lchild;
			}
		}
		else if(data>root->data)
		{
			if( root->rchild==NULL)
			{
				root->rchild=newnode;
				break;	
			}
			else
			{
				temp=temp->rchild;
			}
		}
		
	}
}

int search(int data,TREE*root)
{
	if(data==root->data)
	{
		printf("data is found \n");
		return root;
	}
	else if(data>root->data)
	{
		return search(data,root->rchild);
	}
	else if(data<root->data)
	{
		return search(data,root->lchild);
	}
}

void preorder(TREE*root)
{
	if(root!=NULL)
	{
		printf("%d",root->data);
		preorder(root->lchild);
		preorder(root->rchild);
	}
}

void inorder(TREE*root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		printf("%d",root->data);
		inorder(root->rchild);
	}
}

void postorder(TREE*root)
{
	if(root!=NULL)
	{
		preorder(root->lchild);
		preorder(root->rchild);
		printf("%d",root->data);
	}
}

int count(TREE*root)
{
	if(root!=NULL)
	{
		cnt++;
		count(root->lchild);
		count(root->rchild);
	}
	return cnt;
}

int countleaf(TREE*root)
{
	if(root!=NULL)
	{
		if(root->lchild==NULL && root->rchild==NULL)
		{
			countleaf++;
			countleaf(root->lchild);
			countleaf(root->rchild);			
		}
	}
	return countleaf;
}

int nonleaf(TREE*root)
{
	if(root!=NULL)
	{
		if(root->lchild==NULL || root->rchild==NULL)
		{
			nonleaf++;
			nonleaf(root->lchild);
			nonleaf(root->rchild);
		}
	}
	return nonleaf;
}

TREE*copy(TREE*root)
{
	TREE*newnode;
	if(root!=NULL)
	{
		newnode=malloc(sizeof(TREE));
		newnode->lchild=copy(root->lchild);
		newnode->rchild=copy(root->rchild);
		newnode->data=root->data;
		return newnode;
	}
	return NULL;
}

void mirror(TREE *root)
{
	TREE *temp=root,*temp1;
	if(temp)
	{
		if(temp->left) mirror(temp->left);
		if(temp->right) mirror(temp->right);
	}
	temp1=temp->left;
	temp->left=temp->right;
	temp->right=temp1;
}

int comparebst(TREE *root1, TREE *root2)
{
	static int equal =0;
	if(root1==NULL && root2==NULL)
		return 1;
	else if(root1!=NULL && root2!=NULL)
		if(root1->data == root2->data)
		{
			if(comparebst(root1->left,root2->left))
				equal = comparebst(root1->right,root2->right);
		}
		else equal=0;
	return equal;
		
}

typedef struct queue
{
	TREE * value[max];
	int front,rear;
}IQUEUE;


void heapify(int arr[],int n, int i)
{
	int largest = i;
	int left = 2*i+1;
	int right = 2*i+2;
	int temp;

	if(left < n && arr[left] > arr[largest])
		largest =left;

	if(right < n && arr[right] > arr[largest])
		largest =right;

	if(largest!=i)
	{
		// swap arr[i], arr[largest]
		temp=arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
		heapify(arr,n,largest);	
	}
}

void heapsort(int arr[], int n)
{
	int i, temp;
	for(i=n/2-1;i>=0;i--)
		heapify(arr,n,i);
	
	for(i=n-1;i>0;i--)
	{
		//swap arr[0],arr[i]
		temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;

		heapify(arr,i,0);
	}
}

void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}

struct graphnode
{
	int vertex;
	struct graphnode *next;
}*list[5];

int main()
{
	int n,i,j,**graph,count;
	struct graphnode *t,*nn;
	printf("\nHow many vertices : ");
	scanf("%d",&n);
	graph=malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		graph[i]=malloc(n*sizeof(int));
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
			printf("Is there edge between V%d & V%d?(1 for yes,0 for no):",i+1,j+1);
			scanf("%d",&graph[i][j]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d\t",graph[i][j]);
	}
	for(i=0;i<n;i++)
	{
		list[i]=malloc(sizeof(struct graphnode));
		list[i]->vertex=i+1;
		list[i]->next=NULL;
		for(j=0;j<n;j++)
		{
			if(graph[i][j]==1)
			{
				nn=malloc(sizeof(struct graphnode));
				nn->vertex=j+1;
				nn->next=NULL;
				for(t=list[i];t->next!=NULL;t=t->next);
				t->next=nn;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(t=list[i];t!=NULL;t=t->next)
			printf("%d\t",t->vertex);
		printf("\n");
	}
	for(count=0,i=0;i<n;i++)
	{
		count=0;
		for(t=list[i]->next;t!=NULL;t=t->next,count++);
		printf("%d",count);
	}
	for(count=0,i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			for(t=list[j]->next;t!=NULL;t=t->next)
			{
				if(t->vertex==i+1)
					count++;
			}
		}
		printf("Indegree(v%d)=%d\n",i+1,count);
	}
	return 0;
}

struct graphnode
{
	int vertex;
	struct graphnode *next;
}*list[10],*nn=NULL,*t=NULL;

int graph[10][10];

void dfs(int vertex,int n)
{
	static int visited[10];
	int w,i;
	if(!visited[vertex]) 
	{
		visited[vertex]=1;
		printf("\nV%d\n",vertex+1);
	}
	for(i=0;i<n;i++)
		if(graph[vertex][i]==1)
			if(visited[i] ==0)
				dfs(i,n);	
}

void bfs(int vertex,int n)
{
	static int visited[10];
	int found,i;
	IQUEUE q;
	initq(&q);
	visited[vertex]=1;
	addq(&q,vertex);
	while(!isEmptyq(&q))
	{
		vertex=delq(&q);
		printf("V%d\t",vertex+1);		
		for(i=0;i<n;i++)
			if(graph[vertex][i]==1)
				if(visited[i] ==0)
				{
					addq(&q,i);
					visited[i]=1;
				}
	}
}

int main()
{
	int n,i,j,*outdeg,*indeg;
	int count=0;
	
	printf("\nHow many vertices : ");
	scanf("%d",&n);
	outdeg=calloc(n,sizeof(int));
	indeg=calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		graph[i][i]=0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
			printf("Is there edge between V%d & V%d?(1 for yes,0 for no):",i+1,j+1);
			scanf("%d",&graph[i][j]);
			}
		}
	}
	printf("adjacency matrix = \n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d\t",graph[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			outdeg[i]+=graph[i][j];
			indeg[i]+=graph[j][i];
		}
	}
	printf("\n\nvertex\tIndeg\tOutdeg\tTotal degree");
	for(i=0;i<n;i++)
		printf("\nV%d\t%d\t%d\t%d",i+1,outdeg[i],indeg[i],outdeg[i]+indeg[i]);	
		
	printf("\ndfs yields \n");
	dfs(0,n);
	printf("\nBFS \n");
	bfs(0,n);
	
	for(i=0;i<n;i++)
	{
		list[i]=malloc(sizeof(struct graphnode));
		list[i]->vertex=i+1;
		list[i]->next=NULL;
		for(j=0;j<n;j++)
		{
			if(graph[i][j]==1)
			{
				nn=(struct graphnode*)malloc(sizeof(struct graphnode));
				nn->vertex=j+1;
				nn->next=NULL;
				for(t=list[i];t->next!=NULL;t=t->next);
				t->next=nn;
			}
		}
	}
	printf("\nAdjacency list:\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(t=list[i];t!=NULL;t=t->next)
			printf("%d->",t->vertex);
		printf("NULL\n");
	}
	printf("\noutdegree\n");
	for(i=0;i<n;i++)
	{	count=0;
		printf("\nV%d:",i+1);
		for(t=list[i]->next;t!=NULL;t=t->next,count++);
			printf("%d",count);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			for(t=list[j]->next;t!=NULL;t=t->next)
			{
				if(t->vertex==i+1)
					count++;
			}
		}
		printf("\nIndegree(v%d)=%d\n",i+1,count);
	}


	return 0;
}

#define empty 0
#define max 10

typedef struct queue
{
	int value[max];
	int front,rear;
}IQUEUE;

void initq(IQUEUE *q)
{
	(*q).rear=(*q).front=empty;	
}

int isEmptyq(IQUEUE *q)
{
	return ((*q).front==(*q).rear? 1 : 0);
}

void addq(IQUEUE *q,int x)
{
	(*q).value[(*q).rear++]=x;
}

int delq(IQUEUE *q)
{
	return((*q).value[(*q).front++]);
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **mat;
	int n,i,j;
	printf("\nHow many vertices : ");
	scanf("%d",&n);
	mat = (int **)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		mat[i]=malloc(n*sizeof(int));
		for(j=0;j<n;j++)
		{
			mat[i][i]=0;
			if(i!=j)
			{
				printf("Is there edge between V%d & V%d?(1 for yes,0 for no):",i+1,j+1);
				scanf("%d",&mat[i][j]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d\t",mat[i][j]);
	}	
	for(i=0;i<n;i++)
		free(mat[i]);		
	free(mat);
	return 0;
}

#define infinity 9999
#define MAX 20
 
int G[MAX][MAX],spanning[MAX][MAX],n;
 
int prims();
 
int main()
{
	int i,j,total_cost;
	printf("Enter no. of vertices:");
	scanf("%d",&n);
	printf("\nEnter the adjacency matrix:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&G[i][j]);

	total_cost=prims();

	printf("\nspanning tree matrix:\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",spanning[i][j]);
	}
	printf("\n\nTotal cost of spanning tree=%d\n",total_cost);
	return 0;
}
 
int prims()
{
	int cost[MAX][MAX];
	int u,v,min_distance,distance[MAX],from[MAX];
	int visited[MAX],no_of_edges,i,min_cost,j;

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(G[i][j]==0)
				cost[i][j]=infinity;
			else
				cost[i][j]=G[i][j];
			spanning[i][j]=0;
		}
	distance[0]=0;
	visited[0]=1;
	for(i=1;i<n;i++)
	{
		distance[i]=cost[0][i];
		from[i]=0;
		visited[i]=0;
	}
	min_cost=0; 
	no_of_edges=n-1; 
	while(no_of_edges>0)
	{
		min_distance=infinity;
		for(i=1;i<n;i++)
			if(visited[i]==0&&distance[i]<min_distance)
			{
				v=i;
				min_distance=distance[i];
			}
			u=from[v];

			spanning[u][v]=distance[v];
			spanning[v][u]=distance[v];
			no_of_edges--;
			visited[v]=1;

			for(i=1;i<n;i++)
				if(visited[i]==0&&cost[i][v]<distance[i])
				{
					distance[i]=cost[i][v];
					from[i]=v;
				}
				min_cost=min_cost+cost[u][v];
	}
	return(min_cost);
}

int n,adj[MAX][MAX];
int front = -1,rear = -1,queue[MAX];

void insert_queue(int node)
{
	queue[++rear]=node;
}

int delete_queue()
{
	return queue[++front];
}

int indegree(int node) 
{
	int i,in_deg = 0;
	for (i = 0;i < n;i++)
	   if(adj[i][node] == 1)
	    in_deg++;
	return in_deg;
}

void create_graph() 
{
   	int i,j,max_edges,origin,destin;
   	printf("\n Enter number of vertices:");
   	scanf("%d",&n);
   	printf("\nno.of vertices= %d\n",n);
    for (i = 0;i < n;i++) 
   		for (j = 0;j<n;j++) 
   			adj[i][j]=0;

    max_edges = n * (n - 1);
    printf("\nmax edges = %d\n",max_edges);
    for (i = 1;i <= max_edges;i++) 
    {
    	printf("\n Enter edge %d (00 to quit):",i);
    	scanf("%d%d",&origin,&destin);
    	if((origin == 0) && (destin == 0)) 
    		break;
    	else
    	   adj[origin-1][destin-1] = 1;
    }
    return;
}

void display() 
{
   	int i,j;
   	for (i = 0;i < n;i++) 
   	{
   		printf("\n");
    	for (j = 0;j<n;j++) 
    	{
    		printf("%d\t",adj[i][j]);
    	}
    }
}

int main()
{
	int i,j = 0,k;
  	int topsort[MAX],indeg[MAX];

   	create_graph();

   	printf("The adjacency matrix is:\n");
   	display();

   	for (i=0;i<n;i++)
   	{
   		indeg[i]=indegree(i);
  		if(indeg[i]==0)
    		   insert_queue(i);
    }
    while(front<=rear) 
    {
    	k=delete_queue();
    	topsort[j++]=k+1;
    	for (i=0;i<n;i++) 
    	{
    		if(adj[k][i]==1) 
    		{
    			adj[k][i]=0;
    			indeg[i]=indeg[i]-1;
    			if(indeg[i]==0)
    			     insert_queue(i);
    		}
    	}
    }
    printf("\n\nNodes after topological sorting are:\t");
    for (i=0;i<n;i++)
      printf("V%d\t",topsort[i]);
    printf("\n");
    return 0;
}

#define INFINITY 9999
#define MAX 10
void dijkstra(int G[MAX][MAX],int n,int startnode);
int main()
{
int G[MAX][MAX],i,j,n,u;
printf(&quot;Enter no. of vertices:&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;\nEnter the adjacency matrix:\n&quot;);
for(i=0;i&lt;n;i++)
for(j=0;j&lt;n;j++)
scanf(&quot;%d&quot;,&amp;G[i][j]);
printf(&quot;\nEnter the starting node:&quot;);
scanf(&quot;%d&quot;,&amp;u);
dijkstra(G,n,u);
return 0;
}
void dijkstra(int G[MAX][MAX],int n,int startnode)
{
int cost[MAX][MAX],distance[MAX],pred[MAX];
int visited[MAX],count,mindistance,nextnode,i,j;
//pred[] stores the predecessor of each node
//count gives the number of nodes seen so far
//create the cost matrix
for(i=0;i&lt;n;i++)
for(j=0;j&lt;n;j++)
if(G[i][j]==0)
cost[i][j]=INFINITY;
else
cost[i][j]=G[i][j];
//initialize pred[],distance[] and visited[]
for(i=0;i&lt;n;i++)
{
distance[i]=cost[startnode][i];
pred[i]=startnode;
visited[i]=0;
}
distance[startnode]=0;
visited[startnode]=1;
count=1;
while(count&lt;n-1)
{
mindistance=INFINITY;
//nextnode gives the node at minimum distance

for(i=0;i&lt;n;i++)
if(distance[i]&lt;mindistance&amp;&amp;!visited[i])
{
mindistance=distance[i];
nextnode=i;
}
//check if a better path exists through nextnode
visited[nextnode]=1;
for(i=0;i&lt;n;i++)
if(!visited[i])

if(mindistance+cost[nextnode][i]&lt;distance[i])

{

distance[i]=mindistance+cost[nextnode][i];

pred[i]=nextnode;
}

count++;
}
//print the path and distance of each node
for(i=0;i&lt;n;i++)
if(i!=startnode)
{
printf(&quot;\nDistance of node%d=%d&quot;,i,distance[i]);
printf(&quot;\nPath=%d&quot;,i);
j=i;
do
{
j=pred[j];
printf(&quot;&lt;-%d&quot;,j);
}while(j!=startnode);

}
}

/* Assignment 7 : Hash Table – I
Set A: Write program to implement various types of hash functions which are used to place the data
in a hash table
a. Division Method b. Mid square method
*/
#include&lt;stdlib.h&gt;
#include&lt;stdio.h&gt;
#define MAX 10

int divide(int value)
{
return value % MAX;
}
int midsquare(int value)
{
int sqr = value * value;
int digit=0,i,rem;
int temp=sqr;
while(temp!=0)
{
rem = temp %10;
temp=temp/10;
digit++;
}
printf(&quot;\nno.of digits = %d\n&quot;,digit);
for(i=0;i&lt;=digit/2;i++)
{
rem=sqr%10;
sqr=sqr/10;
}
printf(&quot;\nmiddle digit = %d\n&quot;,rem);

return rem % MAX;
}
int main()
{
int hashtable[MAX],i,ch,n,ele,key,j,k;
int ht_midsq[MAX][MAX];
do
{
for(i=0;i&lt;MAX;i++)
{
hashtable[i]=-1;
ht_midsq[i][0]=-1;
ht_midsq[i][1]=-1;
}
printf(&quot;\n0.Exit\n1.division\n2.midsquare\n&quot;);
printf(&quot;\nEnter ur choice:&quot;);
scanf(&quot;%d&quot;,&amp;ch);
switch(ch)
{
case 0: exit(0);
case 1:

for(i=0;i&lt;MAX;i++)
printf(&quot;\nBucket %d: %d&quot;,i,hashtable[i]);

printf(&quot;\nHow many elements:&quot;);
scanf(&quot;%d&quot;,&amp;n);
for(i=0;i&lt;MAX;i++) hashtable[i]=-1;
for(i=0;i&lt;n;i++)
{
printf(&quot;\nEnter element:&quot;);
scanf(&quot;%d&quot;,&amp;ele);

key=divide(ele);
if(hashtable[key]==-1)
hashtable[key]=ele;
else
{
printf(&quot;\ncollision\n&quot;);
for(j=key+1; j!=key;j=(j+1)%MAX)
{
if(hashtable[j]==-1)
{
hashtable[j]=ele;
break;
}
}
if(j==key) printf(&quot;\nHash table full\n&quot;);
}
}
printf(&quot;\nHash table using division method:\n&quot;);
for(i=0;i&lt;MAX;i++)
printf(&quot;\nBucket %d: %d&quot;,i,hashtable[i]);
break;

case 2:

for(i=0;i&lt;MAX;i++)
printf(&quot;\nBucket %d: %d&quot;,i,hashtable[i]);

printf(&quot;\nHow many elements:&quot;);
scanf(&quot;%d&quot;,&amp;n);
for(i=0;i&lt;MAX;i++) hashtable[i]=-1;
for(i=0;i&lt;n;i++)

{
printf(&quot;\nEnter element:&quot;);
scanf(&quot;%d&quot;,&amp;ele);
key=midsquare(ele);
if(hashtable[key]==-1)
hashtable[key]=ele;
else
{
printf(&quot;\ncollision\n&quot;);
for(j=key+1; j!=key;j=(j+1)%MAX)
{
if(hashtable[j]==-1)
{
hashtable[j]=ele;
break;
}
}
if(j==key) printf(&quot;\nHash table full\n&quot;);
}
}
printf(&quot;\nHash table using midsquare method:\n&quot;);
for(i=0;i&lt;MAX;i++)
printf(&quot;\nBucket %d: %d&quot;,i,hashtable[i]);
break;

}
}while(ch!=0);
}

/* Ass 8 – Hash Table – II
Set A - Implement hash table using singly linked lists. Write a menu driven program to perform
operations on hash table (insert, search, delete, display). Select appropriate hashing function. In case
of collision, use separate chaining */
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#define TABLE_SIZE 10

struct node
{
int data;
struct node *next;
};

struct node *head[TABLE_SIZE]={NULL},*c;

void insert()
{
int i,key;
printf(&quot;Enter a value to insert into hash table: &quot;);
scanf(&quot;%d&quot;,&amp;key);
i=key%TABLE_SIZE;
struct node * newnode=(struct node *)malloc(sizeof(struct node));
newnode-&gt;data=key;
newnode-&gt;next = NULL;
if(head[i] == NULL)
head[i] = newnode;
else
{
c=head[i];
while(c-&gt;next != NULL)
{

c=c-&gt;next;
}
c-&gt;next=newnode;
}
}

void search()
{
int key,index;
printf(&quot;Enter the element to be searched: &quot;);
scanf(&quot;%d&quot;,&amp;key);
index=key%TABLE_SIZE;

if(head[index] == NULL)
printf(&quot;Search element not found!&quot;);
else
{
for(c=head[index];c!=NULL;c=c-&gt;next)
{
if(c-&gt;data == key)
{
printf(&quot;Search element found!&quot;);
break;
}
}
if(c==NULL)
printf(&quot;Search element not found!&quot;);
}
}

void display()

{
int i;
for(i=0;i&lt;TABLE_SIZE;i++)
{
printf(&quot;\nEntries at index %d: &quot;,i);
if(head[i] == NULL)
{
printf(&quot;No Hash Entry!&quot;);
//return;
}
else
{
for(c=head[i];c!=NULL;c=c-&gt;next)
printf(&quot;%d-&gt;&quot;,c-&gt;data);
}
}
}

int main()
{
int opt,key,i;
while(1)
{
printf(&quot;\n1.Insert\n2.Display\n3.Search\n4.Exit\nEnter choice:&quot;);
scanf(&quot;%d&quot;,&amp;opt);
switch(opt)
{
case 1:
insert();
break;
case 2:

display();
break;
case 3:
search();
break;
case 4:exit(0);
default:
printf(&quot;Enter Valid Choice!&quot;);
}
}
}

/* Assignment 7 SET B
Hashing - Division method. Handle Collision using Linear Probing */

#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10

int h[TABLE_SIZE]={};

void insert()
{

 int key,index,i,flag=0,hkey;
 printf("\nenter a value to insert into hash table\n");
 scanf("%d",&key);
 hkey=key%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE;i++)
    {
          
     index=(hkey+i)%TABLE_SIZE;

     if(h[index] == 0)
     {
        h[index]=key;
         break;
         
     }
     else
     	printf("\nCollision");

    }

    if(i == TABLE_SIZE)

     printf("\nelement cannot be inserted\n");
}
void search()
{

 int key,index,i,flag=0,hkey;
 printf("\nenter search element\n");
 scanf("%d",&key);
 hkey=key%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE; i++)
 {
    index=(hkey+i)%TABLE_SIZE;
    if(h[index]==key)
    {
      printf("value is found at index %d",index);
      break;
    }
  }
  if(i == TABLE_SIZE)
    printf("\n value is not found\n");
}
void display()
{

  int i;

  printf("\nelements in the hash table are \n");

  for(i=0;i< TABLE_SIZE; i++)

  printf("\nat index %d \t value =  %d",i,h[i]);

}
main()
{
    int opt,i;
    while(1)
    {
        printf("\nPress 1. Insert\t 2. Display \t3. Search \t4.Exit \n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
        }
    }
}
