#include<stdio.h>
#include<stdlib.h>
#include<queue>
typedef char bdtype;
typedef struct binarytreetype
{
    struct binarytreetype* left;
    struct binarytreetype* right;
    bdtype data;
} binarytreetype;
void preorader(binarytreetype*root)
{
    if(root == NULL)
    {
        printf(" NULL ");
        return;
    }
    printf(" %c ",root->data);
    preorader(root->left);
    preorader(root->right);
}
void zhongxu(binarytreetype* root)
{
    if(root == NULL)
    {
        printf(" NULL");
        return;
    }
    zhongxu(root->left);
    printf(" %c ",root->data);
    zhongxu(root->right);
}
int treesize(binarytreetype* root)
{
    // if(root == NULL)
    //     return;
    // else
    // {
    //     ++(*psize);
    // }
    // treesize(root->left,psize);
    // treesize(root->right,psize);

    return  root == NULL ? 0  : treesize(root->left) + treesize(root->right) +1; 

}
void postorader(binarytreetype*root)
{
     if(root == NULL)
    {
        printf(" NULL");
        return;
    }
     postorader(root->left);
     postorader(root->right);
     printf(" %c ",root->data);
}
int leafszie(binarytreetype* root)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right ==NULL)
        return 1;
    return leafszie(root->left )+ leafszie(root->right);
}
void leveorder(binarytreetype* root)
{
    std::queue<struct binarytreetype*> q1;
    if(root)
        q1.push(root);
    while(!q1.empty())
    {
        binarytreetype* front=q1.front();
        q1.pop();
        printf("%c",front->data);

        if(front->left)
        {
            q1.push(front->left);
        }

         if(front->right)
        {
           q1.push(front->right);
        }

    }
    printf("\n");
}
int main()
{
     binarytreetype*A =( binarytreetype*)malloc(sizeof( binarytreetype));
    A->data='A';
    A->left=NULL;
    A->right=NULL;

     binarytreetype*B =( binarytreetype*)malloc(sizeof( binarytreetype));
    B->data='B';
    B->left=NULL;
    B->right=NULL;
    
     binarytreetype*C =( binarytreetype*)malloc(sizeof( binarytreetype));
    C->data='C';
    C->left=NULL;
    C->right=NULL;
    
     binarytreetype*D =( binarytreetype*)malloc(sizeof( binarytreetype));
    D->data='D';
    D->left=NULL;
    D->right=NULL;

     binarytreetype*E =( binarytreetype*)malloc(sizeof( binarytreetype));
    E->data='E';
    E->left=NULL;
    E->right=NULL;

     binarytreetype*F =( binarytreetype*)malloc(sizeof( binarytreetype));
    F->data='F';
    F->left=NULL;
    F->right=NULL;

    A->left=B;
    A->right=C;
    B->left=D;
    B->right=E;
    
    // preorader(A);
    // printf("\n");
    // zhongxu(A);
    // printf("\n");
    // postorader(A);
    // printf("\n");

    // int size=0;
    // size=treesize(A);
    // printf("size = %d \n",size);

    // size =0;
    // size=treesize(B);
    // printf("size = %d \n",size);

    leveorder(A);
    

}
