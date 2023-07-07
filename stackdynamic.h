#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Function prototypes
void push();       // Push element to the top of the stack
int pop();         // Remove and return the top most element of the stack
int peek();        // Return the top most element of the stack
bool isEmpty();    // Check if the stack is in Underflow state or not

struct node{
    int val;
    struct node *next;
};

struct node *head;

void push (){
    int val;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value to be pushed: ");
    scanf("%d", &val);

    if(head == NULL){
        ptr->val = val;
        ptr->next = NULL;
        head = ptr;
    }
    else{
        ptr->val = val;
        ptr->next = head;
        head=ptr;
    }
}

int pop(){
    int item;
    struct node *ptr;
    if (head == NULL)
        printf("Underflow State: can't remove any item");
    else{
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("%d is popped out of the stack", item);
        return item;
    }
    return -1;
}

int peek(){
    int x = head->val;
    printf("%d is the top most element of the stack\n", x);
    return x;
}

bool isEmpty(){
    if(head == NULL){
        printf("Stack is empty: Underflow State\n");
        return true;
    }
    printf("Stack is not empty\n");
    return false;
}
