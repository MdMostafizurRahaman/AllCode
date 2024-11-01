#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;
struct node{
    int data;
    struct node*left;
    struct node*right;
    struct node*parent;

};
    Node *root;

int main(){
    root = (Node*)malloc(sizeof(Node));
    root->data = 15;
    root->left = NULL;
    root->right = NULL;
    insert(root,5);
    return 0;
    
}
void insert(struct node*T, int z){
    Node*newnode = (Node*)malloc(sizeof(Node));
    newnode->data = z;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->parent = NULL;
    Node *y = NULL;
    Node *x = T;
    while( x != NULL)
    {
        y = x;
        if(newnode->data < x->data){
            x = x-> left;

        }
        else
        x = x->right;
    }
    newnode->parent = y;
    if(y == NULL){
        T = newnode;
    }
    else if(newnode->data < y->data)
        y->left = newnode ;
    else
        y->right = newnode;

}
