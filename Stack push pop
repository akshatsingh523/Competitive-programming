#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int* arr;
    int top;
    int size;
};

int isempty(struct stack* ptr)
{
    if(ptr->top=-1)
    {
        return -1;
    }
    
    return 0;
}

void push(struct stack* ptr,int value)
{
    if(isfull(ptr))
    {
        printf("Stack overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=8;
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

int isfull(struct stack* ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    struct stack* s=(struct stack* )malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int* )malloc(s->size*sizeof(int* ));
    
    push(s,21);
    //pop(s);
    return 0;
}


