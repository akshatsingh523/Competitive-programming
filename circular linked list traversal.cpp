#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void traversal(struct Node* ptr)
{
    printf("element: %d",ptr->data);
    ptr=ptr->next;
}

void linkedlisttraversal(struct Node* head)
{
    struct Node* ptr=head;
    do{
    printf("element:%d\n",ptr->data);
    ptr=ptr->next;
        
    }
    while(ptr!=head);

}
struct Node* insertion(struct Node* head,int data)
{
    struct Node* ptr=(struct Node* )malloc(sizeof(struct Node* ));
    struct Node* p=head->next;
    ptr->data=data;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
}

int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node* ));
    struct Node* first=(struct Node* )malloc(sizeof(struct Node* ));
    struct Node* second=(struct Node* )malloc(sizeof(struct Node* ));
    struct Node* third=(struct Node* )malloc(sizeof(struct Node* ));
    head->data=7;
    head->next=first;
    first->data=9;
    first->next=second;
    second->data=89;
    second->next=third;
    third->data=75;
    third->next=head;
    printf("Before adding the list is: \n");
    linkedlisttraversal(head);
    head=insertion(head,80);
    printf("After adding the element in the list is: \n");
    linkedlisttraversal(head);
    return 0;

}
