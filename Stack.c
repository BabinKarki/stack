#include<stdio.h>
#define MAXITEMS 15
typedef struct{
	int top;
	int items[MAXITEMS];
}stack;
void push(stack*, int);
int pop(stack*);
int main()
{
	stack s;
	s.top=-1;
	push(&s,1);
	push(&s,2);
	push(&s,3);
	push(&s,4);
	push(&s,5);
	push(&s,6);
	push(&s,7);
	push(&s,8);
	push(&s,9);
	push(&s,10);
	push(&s,11);
	push(&s,12);
	push(&s,13);
	push(&s,14);
	push(&s,15);
    printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));//Stack will be overflowed beacuse push value is less than pop value
}
void push(stack *s,int x)
{
	if (s->top== MAXITEMS -1)
	{
		printf("%s","Stack Overflow");
		exit(1);	
	}else
	 {
		s->items[++(s->top)]=x;	
	}
}
int pop(stack *s)
{
if(s->top == -1)
{
		printf("%s","stack underflow");
		exit(1);
		}
		else {
	return (s->items[(s->top)--]);	
	}
}



