#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCL
{
   public :
   PNODE First;
   PNODE Last;
   
   
};

void InsertFirst(PPNODE First ,PPNODE Last,int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   
   newn->data = no;
   newn->next = NULL;
   
   if(*First ==NULL && *Last ==NULL)
   { 
     *First = *Last = newn;
     (*Last) ->next = *First;
   }
   else
   {
      newn ->next =*First;
      *First = newn;
      (*Last) ->next = *First;
   }
}

void InsertLast(PPNODE First ,PPNODE Last,int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   
   newn->data = no;
   newn->next = NULL;
   
   if(*First ==NULL && *Last ==NULL)
   { 
     *First = *Last = newn;
     (*Last) ->next = *First;
   }
   else
   {
      (*Last)->next = newn;
      *Last = newn;
      (*Last) ->next = *First;
   }
}

void Display(PNODE First , PNODE Last)
{
  printf("Elements of Linked List are : \n");
  
  do
  {
     printf("| %d |->",First->data);
     First = First ->next;
  }while(First != Last->next);
  
  printf("\n");
}

int Count(PNODE First , PNODE Last)
{
  printf("Elements of Linked List are : \n");
  int icnt =0;
  do
  {
     icnt++;
     First = First ->next;
  }while(First != Last->next);
  return icnt;
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
   if((*First ==NULL) && (*Last ==NULL)) //empty LL
   {
      return ;
   }
   else if(*First == *Last) // songle node in LL
   {
      free(*First);  //or free(*Last)
      *First = NULL;
      *Last = NULL;
   }
   else
   {
      *First = (*First)->next;
      free((*Last)->next);
      (*Last) ->next = *First;
   }
}

void DeleteLast(PPNODE First,PPNODE Last)
{  
   PNODE temp = *First;
   
   if((*First ==NULL) && (*Last ==NULL)) //empty LL
   {
      return ;
   }
   else if(*First == *Last) // songle node in LL
   {
      free(*First);  //or free(*Last)
      *First = NULL;
      *Last = NULL;
   }
   else
   {
       while(temp ->next != *Last)
       {
          temp = temp ->next;
       }
       
       free(temp->next);  //free(*Last); 
       *Last = temp; 
       (*Last) ->next = *First;
   }
}

void InsertAtPos(PPNODE First,PPNODE Last,int no,int pos)
{
  int iNodeCnt =0,icnt=0;
  
  iNodeCnt = Count(*First,*Last);
  PNODE  newn = NULL;
  PNODE temp = *First;
  
  if(pos<1 || pos >iNodeCnt +1)
  {
    printf("Invalid Posidtion \n");
    return ;
  }
  
  if(pos ==1)
  {
    InsertFirst(First,Last,no);
  }
  else if(pos == iNodeCnt)
  {
    InsertLast(First,Last,no);
  }
  else
  {
     newn = (PNODE)malloc(sizeof(NODE));
     newn ->data = no;
     newn ->next = NULL;
     
     for(icnt =1;icnt<pos-1;icnt++)
     {
        temp = temp ->next;
     }
     
     newn->next = temp->next;
     temp->next = newn;
  }
}

void DeleteAtPos(PPNODE First,PPNODE Last,int pos)
{
  int iNodeCnt =0,icnt;
  PNODE temp1 = *First;
  PNODE temp2 = *First;
  iNodeCnt = Count(*First,*Last);
  
  if(pos<1 || pos >iNodeCnt )
  {
    printf("Invalid Posidtion \n");
    return ;
  }
  
  if(pos ==1)
  {
    DeleteFirst(First,Last);
  }
  else if(pos == iNodeCnt)
  {
    DeleteLast(First,Last);
  }
  else
  {
     for(icnt =1;icnt<pos-1;icnt++)
     {
        temp1 = temp1 ->next;
     }
     temp2 = temp1->next;
     temp1->next = temp2->next;
     free(temp2);
  }
}

int main()
{
   PNODE Head = NULL;
   PNODE Tail = NULL;
   int iRet =0;
   
   InsertFirst(&Head,&Tail,51);
   InsertFirst(&Head,&Tail,21);
   InsertFirst(&Head,&Tail,11);
   
   InsertLast(&Head,&Tail,101);
   InsertLast(&Head,&Tail,111);
   InsertLast(&Head,&Tail,121);
   
   InsertAtPos(&Head,&Tail,105,5);
   
   Display(Head,Tail);
   iRet = Count(Head,Tail);
   
   printf("Number of elements of array are : %d\n",iRet);
   
   DeleteAtPos(&Head,&Tail,5);
   
   Display(Head,Tail);
   iRet = Count(Head,Tail);
   
   printf("Number of elements of array are : %d\n",iRet);
   
   DeleteFirst(&Head,&Tail);
   DeleteLast(&Head,&Tail);
   
   Display(Head,Tail);
   iRet = Count(Head,Tail);
   
   printf("Number of elements of array are : %d\n",iRet);
  
  return 0;
}
