#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
	int no;
	struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertLast(PPNODE First,int data)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;
	
	newn->no = data;
	newn->next = NULL;
	printf("Inserting....\n");
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
		newn->next = NULL;
	}
}

void Display(PNODE First)
{
	while(First != NULL)
	{
		printf("| %d |->",First->no);
		First = First->next;
	}
	printf("\n");
}

int Maximum(PNODE First)
{
	int iMax = 0;
	
	if(First==NULL)
	{
		printf("Linked list is empty\n");
		return 0;
	}
	
	iMax = First->no;
	while(First!= NULL)
	{
		if(First->no > iMax)
		{
			iMax = First->no;
			
		}
		First = First->next;
	}
	return iMax;
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0;
	
	iRet = Maximum(Head);	
	printf("Maximum is : %d\n",iRet);
	
	InsertLast(&Head,11);
	InsertLast(&Head,21);
	InsertLast(&Head,51);
	InsertLast(&Head,101);
	Display(Head);
	
	InsertLast(&Head,111);
	Display(Head);
	
	InsertLast(&Head,121);
	Display(Head);
	
	iRet = Maximum(Head);
	
	printf("Maximum is : %d\n",iRet);
	
	return 0;
}
