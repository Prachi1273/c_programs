#include<stdio.h>
#include<stdlib.h>

struct node
{
	int no;
	struct node*next;
}NODE;

void InsertFirst(struct node**First,int data)
{
	struct node* newn = (struct node*)malloc(sizeof(NODE));
	
	newn->no = data;

		newn->next=*First;
		*First = newn;
	
}

void Display(struct node* first)
{
	while(first!=NULL)
	{
		printf("| %d |->",first->no);
		first=first->next;
	}
	printf("\n");
}

struct Node* swap(struct node*ptr1,struct node*ptr2)
{
	struct node*temp = ptr2->next;
	ptr2->next = ptr1;
	ptr1->next = temp;
	return ptr2;
} 

void BubbleSort(struct node** first,int no)
{
	int i=0,j=0,swapped;
	struct node** head;
	
	for(i=0;i<no;i++)
	{
		swapped =0;
		head=first;
		for(j=0;j<no-i-1;j++)
		{
			struct node*ptr1=*head;
			struct node*ptr2=ptr1->next;
			if(ptr1->no > ptr2->no)
			{
				*head = swap(ptr1,ptr2);
				swapped=1;
			}
			head = &(*head)->next; 
		}
		if(swapped = 0)
			break;
	}
	printf("Linked list after sorting\n");
	while(*first!=NULL)
	{
		printf("| %d |->",(*first)->no);
		*first=(*first)->next;
	}
	printf("\n");
}

int main()
{
	int n =7,i=0;
	
	int arr[]={21,51,121,501,201,11,111};
	
	struct node* head=NULL;
	
	for(i=0;i<n;i++)
	InsertFirst(&head,arr[i]);
	
	printf("Linked list before sorting\n");
	Display(head);
	
	BubbleSort(&head,n);
	
	return 0;
}
