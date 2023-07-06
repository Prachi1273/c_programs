#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
	int data;
	struct node*lchild;
	struct node*rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE root,int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = No;
	newn->lchild = NULL;
	newn->rchild = NULL;
	
	PNODE temp = *root;
	
	if(*root == NULL)
	{
		*root = newn;
	}
	else
	{
		while(1)
		{
			if(No > temp->data)
			{
				if(temp->rchild == NULL)
				{
					temp->rchild = newn;
					break;
				}
				temp = temp->rchild;
			}
			else if(No < temp->data)
			{
				if(temp->lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp = temp->lchild;
			}
			else if(No == temp->data)
			{
				free(newn);
				printf("Duplicate elements are not allowed \n");
				break;
			}
		}
	}
}

void Inorder(PNODE root)
{
	if(root != NULL)
	{
		Inorder(root->lchild);
		printf("%d\t",root->data);
		Inorder(root->rchild);
	}
}

void Preorder(PNODE root)
{
	if(root != NULL)
	{
		printf("%d\t",root->data);
		Preorder(root->lchild);		
		Preorder(root->rchild);
	}
}

void Postorder(PNODE root)
{
	if(root != NULL)
	{		
		Postorder(root->lchild);		
		Postorder(root->rchild);
		printf("%d\t",root->data);
	}
}

bool Search(PNODE root , int no)
{
	bool flag = false;
	
	while(root != NULL)
	{
		if(no == root->data)
		{
			flag = true;
			break;
		}
		else if( no > root->data)
		{
			root = root->rchild;
		}
		else if(no < root->data)
		{
			root = root->lchild;
		}
	}
	
	return flag;
}

int main()
{
	PNODE Head = NULL;
	bool bret = false;
	
	Insert(&Head,11);
	Insert(&Head,7);
	Insert(&Head,21);
	
	printf("\nData using Preorder traversal\n");
	Preorder(Head);
	
	printf("\nData using Postorder traversal\n");
	Postorder(Head);
	
	printf("\nData using Inorder traversal\n");
	Inorder(Head);
	
	bret = Search(Head,51);
	if(bret==true)
	{
		printf("\nElement is there in bst\n");
	}
	else
	{
		printf("\nElement is not there in bst\n");
	}
	
	
	return 0;
}
