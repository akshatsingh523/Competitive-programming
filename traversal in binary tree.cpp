//traversal in binary tree 

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
    struct node* p;
    p=(struct node* )malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
};

void preorder(struct node* root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
        
    }
}


int main()
{
    struct node* a=createnode(9);
    struct node* a1=createnode(4);
    struct node* a2=createnode(11);
    struct node* a3=createnode(2);
    struct node* a4=createnode(7);
    struct node* a5=createnode(5);
    struct node* a6=createnode(8);
    struct node* a7=createnode(15);
    struct node* a8=createnode(14);
    a->left=a1;
    a->right=a2;
    a1->left=a3;
    a1->right=a4;
    a2->right=a5;
    a5->left=a8;
    a4->left=a5;
    a4->right=a6;
    inorder(a);
    
    return 0;
}

