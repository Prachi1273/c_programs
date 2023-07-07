#include<stdio.h>
#include<stdlib.h>

struct treenode
{
	int data;
	struct treenode*left;
	struct treenode*right;
};

typedef struct treenode TREE;

void init(TREE**root)
{
	*root = NULL;
}
 int cnt =0;
void insert(value,TREE**root)
{
	TREE*temp=NULL;
	TREE*newnode = malloc(sizeof(TREE));
	newnode->data=value;
	newnode->left=newnode->right=NULL;
	cnt++;
	if(*root==NULL)
	{
		*root=newnode;
	}
	else
	{
		temp=*root;
		if(value>temp->right)
		{
			if(temp->right==NULL)
			{
				temp->right=newnode;
				break;
			}
			else
			{
				temp=temp->right;
			}
		}
		else if(value<temp->left)
		{
			if(temp->left==NULL)
			{
				temp->left=newnode;
				break;
			}
			else
			{
				temp=temp->left;
			}
		}
		
		
	}
}

int search(value,TREE*root)
{
	if((root==NULL) || (root->data==data))
		return root;
	if(value > root->data)
		return search(value,root->right)
	if(value < root->data)
		return search(value,root->left);
}

void preorder(TREE*root)
{
	if(root!=NULL)
	{
		printf("%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(TREE*root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}

void postorder(TREE*root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
	}
}

int cnt=0;
int count(TREE*root)
{
	if(root!=NULL)
	{
		cnt++;
		count(root->lchild);
		count(root->rchild);
	}
}

int leaf=0;
int countleaf(TREE*root)
{
	if(root!=NULL)
	{
		if(root->lchild==NULL & root->rchild==NULL)
		{
			leaf++;
			countleaf(root->lchild);
			countleaf(root->rchild);
		}
	}
}

int nonleaf=0;
int countnonleaf(TREE*root)
{
	if(root!=NULL)
	{
		if(root->lchild==NULL & root->rchild==NULL)
		{
			nonleaf++;
			countnonleaf(root->lchild);
			countnonleaf(root->rchild);
		}
	}
}

void copy(TREE*root)
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

void mirror(TREE*root)
{
	TREE*temp=root,*temp1;
	if(temp)
	{
		if(temp->lchild) mirror(temp->lchild);
		if(temp->rchild) mirror(temp->rchild);
	}
	temp1=temp->lchild;
	temp->lchild=temp->rchild;
	temp->rchild=temp1;
}

int comparebst(TREE*root1,TREE*root2)
{
	static int equal =0;
	if(root1==NULL && root2==NULL)
	return 1;
	else if(root1!=NULL && root2!=NULL)
		if(root1->data==root2->data)
		{
			if(comparebst(root1->lchild,root2->lchild))
				equal=comparebst(root1->rchild,root2->rchild);
		}
		else equal=0;
		
	return equal;
}


