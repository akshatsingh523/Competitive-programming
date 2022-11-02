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
        printf("Stack overflow");
    }
    return -1;
}

int isempty(struct stack* ptr)
{
  if(ptr->top==-1)
  {
      printf("Stack underflow");
  }
  return -1;
}

void push(struct stack ptr* ,int value)
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

int peek(struct stack* s,int i)
{
    if(s->top-i+1<0)
    {
        return -1;
    }
    else
    return s->arr[s->top-i+1];
}

int pop(struct stack* ptr)
{
    if(isempty(ptr))
    {
        return -1;
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
    struct stack* s=(struct stack* )malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int* )malloc(stack->size*sizeof(int* ));
    push(s,1);
    push(s,46);
    push(s,56);
    push(s,2);
    peek(s,3);
    return 0;
}

