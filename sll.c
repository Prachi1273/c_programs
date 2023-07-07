#include<stdio.h>
#include<stdlib.h>

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
	
	if(*First==NULL)
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
	
	if(*First==NULL)
	{
		*First = newn;
	}
	else 
	{
		while((temp)->next != NULL)
		{
			temp= temp->next;
		}
		temp->next=newn;
		newn->next = NULL;
		
	}
}

void Display(PNODE First)
{
	while(First!=NULL)
	{
		printf("| %d |->",First->no);
		First = First->next;
	}
	printf("\n");
}

int Count(PNODE First)
{
	int i = 0;
	while(First!=NULL)
	{
		i++;
		First = First->next;
	}
	return i;
}

void DeleteFirst(PPNODE First)
{
	PNODE temp = *First;
	if(*First==NULL)
	{
		return;
	}
	else if((*First)->next==NULL)
	{
		free(temp);
		*First=NULL;
	}
	else
	{
		*First=(*First)->next;
		free(temp);
	}
}

void DeleteLast(PPNODE First)
{
	PNODE temp = *First;
	if(*First==NULL)
	{
		return;
	}
	else if(temp->next==NULL)
	{
		free(temp);
		*First=NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void InsertAtPos(PPNODE First,int data)
{
	int pos =0,nodecount;
	PNODE temp = *First;
	nodecount=Count(*First);
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->no = data;
	newn->next = NULL;
	printf("Enter position : \n");
	scanf("%d",&pos);
	
	if(pos<0 || pos>nodecount+1)
	{
		printf("Invalid position \n");
		return;
	}
	
	if(pos==1)
	{
		InsertFirst(First,data);
	}
	else if(pos==nodecount+1)
	{
		InsertLast(First,data);
	}
	else
	{
		int i =0;
		for(i=0;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=newn->next;
		temp->next=newn;
	}
}

void DeleteAtPos(PPNODE First)
{
	int pos =0,nodecount;
	PNODE temp1 = *First;
	PNODE temp2 = *First;
	nodecount=Count(*First);
	printf("Enter position : \n");
	scanf("%d",&pos);
	
	if(pos<0 || pos>nodecount+1)
	{
		printf("Invalid position \n");
		return;
	}
	
	if(pos==1)
	{
		DeleteFirst(First);
	}
	else if(pos==nodecount+1)
	{
		DeleteLast(First);
	}
	else
	{
		int i =0;
		for(i=0;i<pos;i++)
		{
			temp1=temp1->next;
		}
		temp2=temp1->next;
		temp2->next=temp1->next;
		free(temp2);
	}
}

int main()
{
	PNODE Head = NULL;
	/*int ino;
	printf("Enter size : \n");
	scanf("%d",&ino);
	
	int*arr = (int*)malloc(ino*sizeof(int));
	int i =0;
	for(i=0;i<ino;i++)
	{
		scanf("%d",&arr[i]);
	}*/
	
	InsertFirst(&Head,51);
	Display(Head);
	InsertFirst(&Head,21);
	Display(Head);
	InsertFirst(&Head,11);
	Display(Head);
	
	int iret = Count(Head);
	printf("Number of nodes are : %d\n",iret);
	
	InsertLast(&Head,101);
	Display(Head);
	InsertLast(&Head,121);
	Display(Head);
	InsertLast(&Head,151);
	Display(Head);
	
	 iret = Count(Head);
	printf("Number of nodes are : %d\n",iret);
	
	DeleteFirst(&Head);
	Display(Head);
	DeleteLast(&Head);
	Display(Head);
	
	InsertAtPos(&Head,5);
	Display(Head);
	
	 iret = Count(Head);
	printf("Number of nodes are : %d\n",iret);
	
	DeleteAtPos(&Head);
	Display(Head);
	
	 iret = Count(Head);
	printf("Number of nodes are : %d\n",iret);
	
	return 0;
}
