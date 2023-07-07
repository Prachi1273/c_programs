#include<stdio.h>
#include<stdlib.h>
 
struct bst
{
    int data;
    struct bst *lchild,*rchild;
}node;
 
int cnt=0,leafcnt=0,nleafcnt=0;
 
struct bst *create()
{
    struct bst *temp=(struct bst*)malloc(sizeof(struct bst));
    temp->lchild=NULL;
    temp->rchild=NULL;
    return temp;
}
 
void insert(struct bst *r, struct bst *new1)
{
 
    if(new1->data < r->data)
    {
        if(r->lchild==NULL)
            r->lchild=new1;
        else
            insert(r->lchild,new1);
    }
     
    if(new1->data > r->data)
    {
        if(r->rchild==NULL)
            r->rchild=new1;
        else
            insert(r->rchild,new1);
    }
}
 
struct bst *search(struct bst *r, int key)
{
    struct bst *temp;
    temp=r;
    while(temp!=NULL)
    {
        if(temp->data==key)
            return temp;
        if(key < temp->data)
            temp=temp->lchild;
        else
            temp=temp->rchild;
    }
    return NULL;
}
 
int count(struct bst *temp)
{
    if(temp!=NULL)
    {
        cnt++;
        count(temp->lchild);
        count(temp->rchild);
    }
    return cnt;
}
 
int countleaf(struct bst *temp)
{
    if(temp!=NULL)
    {
        if(temp->lchild==NULL && temp->rchild==NULL)
            leafcnt++;
        countleaf(temp->lchild);
        countleaf(temp->rchild);
    }
    return leafcnt;
}
 
int countnleaf(struct bst *temp)
{
    if(temp!=NULL)
    {
        if(temp->lchild!=NULL || temp->rchild!=NULL)
            nleafcnt++;
        countnleaf(temp->lchild);
        countnleaf(temp->rchild);
    }
    return nleafcnt;
}
 
void inorder(struct bst *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->lchild);
        printf("%d\t",temp->data);
        inorder(temp->rchild);
    }
}
 
void postorder(struct bst *temp)
{
    if(temp!=NULL)
    {
        postorder(temp->lchild);
        postorder(temp->rchild);
        printf("%d\t",temp->data);
    }
}
 
 
void preorder(struct bst *temp)
{
    if(temp!=NULL)
    {
        printf("%d\t",temp->data);
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
}
 
void inorder_n(struct bst *r)
{
    struct bst *stack[100];
    int top=-1;
    if(r!=NULL)
    {
        top++;
        stack[top]=r;
        r=r->lchild;
        while(top>=0)
        {
             
            while(r!=NULL)
            {
                top++;
                stack[top]=r;
                r=r->lchild;
            }
            r=stack[top];
            top--;
            printf("%d\t",r->data);
            r=r->rchild;
             
            if(r!=NULL)
            {
                top++;
                stack[top]=r;
                r=r->lchild; 
            }
        }
    }
}

int main()
{
    int ch,n,i,value,cnt;
    struct bst *newnode,*root,*temp;
    root=NULL;
    while(1)
    {
        printf("\n---Binary Search Tree---\n");
        printf("1.Insert\n");
        printf("2.Search\n");
        printf("3.Count Total Nodes\n");
        printf("4.Count Leaf Nodes\n");
        printf("5.Count Non Leaf Nodes\n");
        printf("6.Inorder Traversal (Recursive)\n");
        printf("7.Postorder Traversal (Recursive)\n");
        printf("8.Preorder Traversal (Recursive)\n");
        printf("9.Inorder Traversal (Non Recursive\n");
        printf("10.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
                    case 1:     printf("\nHow many nodes to create:");
                        scanf("%d",&n);
                        for(i=0;i<n;i++)
                    {
                        newnode=create();                   
                        printf("\nEnter the node data:");   
                        scanf("%d",&newnode->data);
                        if(root==NULL)
                            root=newnode;
                        else
                            insert(root,newnode);
                    }
                    break;
            case 2:     printf("\nEnter the node value to be searched:");
                    scanf("%d",&value);
                    temp=search(root,value);
                    if(temp==NULL)
                        printf("\nNode Not Found\n");
                    else
                        printf("\nNode Found\n");
                    break;
            case 3: cnt=count(root);
                    printf("\nTotal Nodes=%d\n",cnt); 
                    break;
            case 4: cnt=countleaf(root);
                    printf("\nTotal Leaf Nodes=%d\n",cnt); 
                    break;
            case 5: cnt=countnleaf(root);
                    printf("\nTotal Non Leaf Nodes=%d\n",cnt); 
                    break;
            case 6:     printf("\nInorder Traversal=");
                    inorder(root); 
                    break;
            case 7: printf("\nPostorder Traversal=");
                    postorder(root); 
                    break;
            case 8:     printf("\nPreorder Traversal=");
                    preorder(root); 
                    break;  
            case 9: printf("\nInorder Traversal=");
                    inorder_n(root); 
                    break;
            case 10: exit(0);
            default: printf("\nInvalid Choice\n");
        }
    }
}
