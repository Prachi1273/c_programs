#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
   int data;
   struct node* next;
};

typedef struct node NODE;    
//original name ->struct node = new name -> NODE

typedef struct node * PNODE;
//original name ->struct node * = new name -> PNODE

typedef struct node ** PPNODE;
//original name ->struct node** = new name -> PPNODE

void InsertFirst(PNODE First, int No)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   
   newn->data = No;
   newn->next = NULL;
   
   if(*First ==NULL)
   {
      *First = newn;
   }
   else
   {
     newn->next = *First;
     *First = newn;
   } 
}

void Display(PNODE First)
{
   printf("Elements of Linked List are : \n");
   while(First!=NULL)
   {
      printf("| %d | ->",First->data);
      First = First->next
   }
   printf("NULL\n");
}

int main()
{
   PNODE Head = NULL;
   
   InsertFirst(&Head,51);
   InsertFirst(&Head,21);
   InsertFirst(&Head,11);
   
   Display(Head);
   
   return 0;
}
