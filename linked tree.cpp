#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int data)
{
    struct node* n;
    n=(struct node* )malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}


int main()
{
    // struct node* p;
    // p=(struct node* )malloc(sizeof(struct node));
    // p->data=2;
    // p->left=NULL;
    // p->right=NULL;
    
    // struct node* p2;
    // p2=(struct node* )malloc(sizeof(struct node));
    // p2->data=4;
    // p2->left=NULL;
    // p2->right=NULL;
    
    // struct node* p3;
    // p3=(struct node* )malloc(sizeof(struct node));
    // p3->data=3;
    // p3->left=NULL;
    // P3->right=NULL;
    
    // p->left=p2;
    // p->right=p3;
    
    struct node* p=createnode(2);
    struct node* p1=createnode(3);
    struct node* p2=createnode(4);
    
    p->left=p1;
    p->right=p2; 
    
    
    
    
    
    return 0;
}
