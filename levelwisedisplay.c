#include<stdio.h>
#include<stdlib.h>
#define max 25

struct node
{
	int data;
	struct node*lchild,rchild;
}TREE;

struct queue
{
	int front,rear;
	TREE*value[max];
}QUEUE;

void init(TREE *root)
{
	*root=NULL;
}

void initq(QUEUE*root)
{
	(*root).front=(*root).rear=NULL;
}

void addq(QUEUE*q,int x)
{
	(*q).value[++(*q).rear]=x;
}

int delq(QUEUE*q)
{
	return ((*q).value[++(*q).front]);
}

void insert(TREE**root,int data)
{
	int cnt=0;
	TREE*temp=root;
	TREE*newnode=malloc(sizeof(TREE));
	newnode->data=data;
	newnode->lchild=newnode->rchild=NULL;
	cnt++;
	if(*root==NULL)
	{
		*root=newnode;
	}
	else
	{
		if(x>temp->data)
		{
			if(temp->rchild==NULL)
			{
				temp->rchild=newnode;
			}
			else
			{
				temp=temp->rchild;
			}
		}
		else if(x<temp->data)
		{
			if(temp->lchild==NULL)
			{
				temp->lchild=newnode;
			}
			else
			{
				temp=temp->lchild;
			}
		}
	}
}

void inorder(TREE*temp)
{
	if(temp!=NULL)
	{
		inorder(temp->lchild);
		printf("data : "temp->value);
		inorder(temp->rchild);
	}
}

void level(TREE *root)
{
	printf("Level wise display :\n");
	TREE *temp=root,*dummy=NULL;
	int level=0;
	IQUEUE q;
	initQ(&q);
	addq(&q,temp);
	addq(&q,dummy);
	printf("\nLevel %d: \t",level);
	do
	{
		temp=delq(&q);
		if(temp!=dummy)
			printf("%d\t",temp->data);
		if(temp==dummy)
		{
			if(!isEmptyQ(&q))
			{
				level++;
				printf("\nLevel %d: \n",level);
				addq(&q,dummy);
			}
		}
		else 
		{
			if(temp->left) addq(&q,temp->left);
			if(temp->right) addq(&q,temp->right);
		}
	}while(!isEmptyQ(&q));
}


int main()
{
	int ch=0,data=0,i;
	TREE*root;
	init(&root);
	do
	{
	printf("\n0.exit\n1.Insert data\n2.level wise display\nEnter your choice : %d\n",ch);
	
	switch(ch)
	{
		case 0:exit(0);
		case 1:
		while(1)
		{
			printf("Data : %d",data);
			insert(&root,data);
			printf("Insert data again?(1 or 0)",i);
		}
		inorder(root);
		break;
		case 2:
		level(&root);
		break;
	}
	}while(ch!=0);
	
	return 0;
}
