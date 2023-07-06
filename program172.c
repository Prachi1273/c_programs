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

void InsertFirst(PPNODE First,int data)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->no = data;
	newn->next = NULL;
	printf("Inserting....\n");
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		newn->next = *First;
		*First = newn;
	}
}

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

int Count(PNODE First)
{
	int icnt =0;
	while(First != NULL)
	{
		icnt++;
		First = First->next;
	}
	return icnt;
}

void InsertAtPos(PPNODE First,int data,int pos)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = NULL;
	int nodecnt =0,i=0;
	
	nodecnt = Count(*First);
	
	newn->no = data;
	newn->next = NULL;
	printf("Inserting....\n");
	if(pos<1 || pos>(nodecnt+1))
	{
		printf("Invalid position\n");
		return;
	}
	
	if(pos==1)
	{
		InsertFirst(First,data);
	}
	else if(pos==(nodecnt+1))
	{
		InsertLast(First,data);
	}
	else
	{
		temp = *First;
		
		for(i=1;i<pos-1;i++)
		{
			temp = temp->next;
		}
		temp->next = newn->next;
		temp->next = newn;		
	}
}

void DeleteFirst(PPNODE First)
{
	PNODE temp = *First;
	printf("Deleting....\n");
	if(*First == NULL)
	{
		return;
	}
	else if((*First)->next == NULL)
	{
		free(*First);
		*First = NULL;
	}
	else
	{
		(*First) = (*First)->next;
		free(temp);
	}
}

void DeleteLast(PPNODE First)
{
	PNODE temp = *First;
	printf("Deleting....\n");
	if(*First == NULL)
	{
		return;
	}
	else if(temp->next == NULL)
	{
		free(temp);
		*First = NULL;
	}
	else
	{
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void DeleteAtPos(PPNODE First,int pos)
{
	PNODE temp1 = NULL;
	PNODE temp2 = NULL;
	int nodecnt =0;
	
	nodecnt = Count(*First);
	printf("Deleting....\n");
	if(pos<1 || pos>(nodecnt+1))
	{
		printf("Invalid position\n");
		return;
	}
	
	if(pos==1)
	{
		DeleteFirst(First);
	}
	else if(pos==(nodecnt+1))
	{
		DeleteLast(First);
	}
	else
	{
		temp1 = *First;
		int i =0;
		for(i=1;i<pos-1;i++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = temp1->next->next;
		free(temp2);
	}
}

int main()
{
	PNODE Head = NULL;
	
	int iChoice = 0,iPos = 0,iRet = 0,iNo = 0;
	
	printf("Welcome to data structure written by PRACHI BARVE\n");
	while(1)
	{
		printf("-------------------------------------------------\n");
		
	printf("Select the desired option from 0 to 9 : \n");
	printf("1 : Insert new node at First position \n");
	printf("2 : Insert new node at last position \n");
	printf("3 : Insert new node at given position \n");
	printf("4 : Delete node at First position \n");
	printf("5 : Delete node at last position \n");
	printf("6 : Deletenode at given position \n");
	printf("7 : Display the contents of linked list  \n");
	printf("8 : Count number of nodes from linked list  \n");

	scanf("%d",&iChoice);

switch(iChoice)
{
	case 1 :
		printf("Enter the data that you want to insert : \n");
		scanf("%d",&iNo);
		
		InsertFirst(&Head,iNo);
		break;
	
	case 2 :
		printf("Enter the data that you want to insert : \n");
		scanf("%d",&iNo);
		
		InsertLast(&Head,iNo);
		break;
	
	case 3 :
		printf("Enter the data that you want to insert : \n");
		scanf("%d",&iNo);
		
		printf("Enter the position : \n");
		scanf("%d",&iPos);
		
		InsertAtPos(&Head,iNo,iPos);
		break;
	
	case 4 :
		DeleteFirst(&Head);
		break;
	
	case 5 :
		DeleteLast(&Head);
		break;
	
	case 6 :
		printf("Enter the position : \n");
		scanf("%d",&iPos);
		
		DeleteAtPos(&Head,iPos);
		break;
	
	case 7 :
		Display(Head);
		break;
	
	case 8 :
		iRet = Count(Head);
		printf("Number of elements are : %d\n",iRet);
		break;
	
	case 9 :
		printf("Thanku for using the application \n");
		return 0;
	
	default :
		printf("Invalid option \n");
		break;
}
		printf("-------------------------------------------------\n");
	}
	
	return 0;
}
