// pre order traversal in binary tree 

/*
4
1       6
5  2
*/

#include <stdio.h>

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

void preorder(struct node* root)
{
    if(root!=NULL)
    {
        printf(root->data);
        preorder(root->left);
        preorder(root->right);
    }
}


int main()
{
    struct node* p=createnode();
    struct node* p1=createnode();
    struct node* p2=createnode();

    return 0;
}
