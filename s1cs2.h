struct stack
{
	int arr[100];
	int top;
};

typedef struct stack stack;

void init(stack *st)
{
	st->top=-1;
}

void push(stack* st,int ele)
{
	st->arr[++st->top]=ele;
}

int isempty(stack*st)
{
	if(st->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isfull(stack*st)
{
	if(st->top==20-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int pop(stack* st)
{
	int ele;
	ele=st->arr[st->top--];
	return ele;
}

int peek(stack* st)
{
	return st->arr[st->top];
}
