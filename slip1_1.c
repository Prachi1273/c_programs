#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int no;
	struct node* next;
	struct node* prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Create(PPNODE First,int data)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;
	newn->no = data;
	newn->next = NULL;
	newn->prev = NULL;
	printf("Inserting...\n");
	if(*First==NULL)
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
		temp = newn;
		newn->prev = temp->next;
	}
}

void Display(PNODE First)
{
	printf("Elements of linked list are : \n");
	while(First != NULL)
	{
		printf("| %d |->",First->no);
		First = First->next;
	}
	printf("\n");
}

void Delete(PPNODE First,int ipos)
{
	PNODE temp = *First;
	PNODE temp1 = *First;
	PNODE temp2 = *First;
	int i =0;
	if(*First==NULL)
	{
		return;
	}
	
	if(temp->next==NULL)
	{
		free(temp);
		temp = NULL;
		return;
	}
	
		if(ipos==1)
		{
			*First = (*First)->next;
			(*First)->prev = NULL;
			free(temp);
			return;
		}
		else
		{
			for(i=1;i<ipos-1;i++)
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
	int iNo = 0,ino = 0,ipos = 0;
	
	while(1)
	{
	printf("-------------------------------------------------------\n");
	
	printf("Select the option from 1 to 4 : \n");
	printf("1 : Create \n");
	printf("2 : Display \n");
	printf("3 : Delete \n");
	printf("4 : Exit \n");
	
	printf("-------------------------------------------------------\n");
	
	scanf("%d",&iNo);
	
	switch(iNo)
	{
		case 1 :
			printf("Enter data that u want to store :");
			scanf("%d",&ino);
			
			Create(&Head,ino);
			break;
		
		case 2 :
			Display(Head);
			break;
		
		case 3 :
			printf("Enter position:");
			scanf("%d",&ipos);
			
			Delete(&Head,ipos);
			break;
		
		case 4 :
		
			printf("Exit\n");
			return 0;
		default :
			printf("Invalid option :");
			break;
	}
	
	}
	return 0;
}
