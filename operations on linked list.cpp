#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    
};

struct Node* insertionafternode(struct Node* prevnode,int data)
{
    struct Node* ptr=(struct Node* )malloc(sizeof(struct Node* ));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    
    return head;
    
    
}

struct Node* insertionatend(struct Node* head,int data)
{
    struct Node* ptr=(struct Node* )malloc(sizeof(struct Node* ));
    struct Node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
    
    
}

struct Node*insertinbtw(struct Node* head,int index,int data)
{
    struct Node* ptr=(struct Node* )malloc(sizeof(struct Node* ));
    struct Node* p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node* insertionatindex(struct Node* head,int value)
{
    struct Node* ptr=(struct Node* )malloc(sizeof(struct Node* ));
    ptr->next=head;
    ptr->data=value;
    head=ptr;
    return head; 
}

void traversal(struct Node* ptr)
{
    while(ptr!=NULL){
    printf("Element is: %d\n",ptr->data);
    ptr=ptr->next;
    }
}

int main()
{
    struct Node* head=(struct Node* )malloc(sizeof(struct Node));
    struct Node* first=(struct Node* )malloc(sizeof(struct Node));
    struct Node* second=(struct Node* )malloc(sizeof(struct Node));
    struct Node* third=(struct Node* )malloc(sizeof(struct Node));
    head->data=1;
    head->next=first;
    first->data=2;
    first->next=second;
    second->data=3;
    second->next=third;
    third->data=4;
    third->next=NULL;
    traversal(head);
    //head=insertionatbeginning(head,34);
    //head=insertionatindex(head,2,56);
    head=insertatend(head,21);
    traversal(head);
    
    return 0;
}

