#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int* arr;
};

int isfull(struct stack* ptr)
{
    if(ptr->top==ptr->size-1)
    {
        printf("\nStack Overflow,Stack if full\n");
    }
    return 0;
}

int isempty(struct stack* ptr)
{
    if(ptr->top=-1)
    {
        printf("Stack underflow,Stack is empty");
    }
    
    return 0;
}

void push(struct stack* ptr,int value)
{
    if(isfull(ptr))
    {
        return -1;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}

int pop(struct stack* ptr)
{
    if(isempty(ptr))
    {
        printf("stack underflow");
        return-1;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


int main()
{
    struct stack* s=(struct stack* )malloc(sizeof(struct stack* ));
    s->size=5;
    s->top=-1;
    s->arr=(int* )malloc(s->size*(sizeof(int* )));
    
    push(s,1);
    push(s,12);
    push(s,45);
    push(s,38);
    push(s,23);
    push(s,48);
    
    for(int i=0;i<s->size;i++)
    {
        printf("%d\n",s->arr[i]);
    }
    return 0;
}


