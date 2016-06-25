#include<stdio.h>
#include<stdlib.h>
#define MAXITEMS 5
typedef struct{
	int top;
	int items[MAXITEMS];
}stack;
void push(stack *, int);
int pop(stack *);
int main()
{
	stack s;
	s.top = -1;
	push(&s,4);
	push(&s,6);
	push(&s,9);
	push(&s,12);
	push(&s,19);
	push(&s,15);
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	
}
void push(stack *s, int x)
{
	if(s->top == 4)
	{
		printf("stack overflow\n");
		exit(1);
	}
	else
	s->items[++(s->top)] = x;
}
int pop (stack*s)
{
	if (s->top == -1)
	{
		printf("stack underflow");
		exit(1);
	}
	return s->items[s->top--];
}
