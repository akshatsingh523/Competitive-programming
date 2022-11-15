#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void traversal(struct node* head)
{
    struct node* p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void magic(struct node* head)
{
    struct node* ptr=head;
    // struct node* p=head;
    int sume=0;
    int sumo=0;
    int i=0;
    int flag=0;
    while(ptr!=NULL)
    {
        if(i%2==0)
        {
            if((ptr->data)%2==0)
            {
                flag=1;
            }
        }
        
        else
        {
            if((ptr->data)%2!=0)
            {
                flag=1;
            }
        }
        ptr=ptr->next;
        i++;
    }
    if(flag=0)
    {
        printf("Magic number");
    }
    else
    {
        printf("Not a magic number");
    }
    
}


int main()
{
    struct node* head;
    struct node* first;
    struct node* second;
    struct node* third;
    head=(struct node* )malloc(sizeof(struct node* ));
    first=(struct node* )malloc(sizeof(struct node* ));
    second=(struct node* )malloc(sizeof(struct node* ));
    third=(struct node* )malloc(sizeof(struct node* ));
    head->next=first;
    first->next=second;
    second->next=third;
    head->data=27;
    first->data=26;
    second->data=15;
    third->data=47;
    traversal(head);
    magic(head);
    
    return 0;
}


