#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node* next;
};

struct Node* deleteatindex(struct Node* head,int value)
{
    struct Node* p=head;
    struct Node* q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}



struct Node* deletelast(struct Node* head)
{
    struct Node* p=head;
    struct Node* q=p->next;
    
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
}


struct Node* deleteatindex(struct Node* head,int index)
{
    struct Node* p=head;
    struct Node* q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct Node* deletingfirst(struct Node* head)
{
    struct Node* ptr=(struct Node* )malloc(sizeof(struct Node* ));
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

void traversal(struct Node* ptr)
{
    while(ptr!=NULL){
    printf("element %d\n",ptr->data);
    ptr=ptr->next;
    }
}


int main ()
{
    struct Node* head=(struct Node* )malloc(sizeof(struct Node* ));
    struct Node* first=(struct Node* )malloc(sizeof(struct Node* ));
    struct Node* second=(struct Node* )malloc(sizeof(struct Node* ));
    struct Node* third=(struct Node* )malloc(sizeof(struct Node* ));
    head->data=8;
    head->next=first;
    first->data=21;
    first->next=second;
    second->data=34;
    second->next=third;
    third->data=74;
    third->next=NULL;
    printf("The Linked list before deletion: \n");
    traversal(head);
    //head=deletingfirst(head);
    // head=deleteatindex(head,2);
    deletelast(head);
    printf("The linked list after deletion: \n");
    traversal(head);
    return 0;
}
