//middle of the linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void traversal(struct node* head)
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

struct node* middle(struct node* head)
{
    struct node* ptr=head;
    struct node* ptr2=head;
    int i=0;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        i++;
    }
    int x=i/2;
    int j=0;
    while(j!=x)
    {
        ptr2=ptr2->next;
        j++;
    }
    printf("%d",ptr2->data);
    
}

int main()
{
    struct node* head;
    struct node* first;
    struct node* second;
    struct node* third;
    struct node* fourth;
    head=(struct node* )malloc(sizeof(struct node* ));
    first=(struct node* )malloc(sizeof(struct node* ));
    second=(struct node* )malloc(sizeof(struct node* ));
    third=(struct node* )malloc(sizeof(struct node* ));
    fourth=(struct node* )malloc(sizeof(struct node* ));
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    head->data=69;
    first->data=45;
    second->data=78;
    third->data=77;
    fourth->data=7;
    // middle(head);
    traversal(head);
    printf("\n");
    middle(head);
    
    return 0;
}
