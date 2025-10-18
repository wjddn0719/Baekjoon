#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *root = NULL;

void postorder(struct Node *node){
    if(node==NULL)return;
    postorder(node->left);
    postorder(node->right);
    printf("%d\n", node->data);
    
}

void insert(){
    int N;
    while(scanf("%d", &N) == 1){
        struct Node *cur = (struct Node*)malloc(sizeof(struct Node));
        cur->data = N;
        cur->left = NULL;
        cur->right = NULL;
        if(root==NULL){
            root=cur;
            continue;
        }
        struct Node *temp = root;
        while(1){
            if(cur->data < temp->data){
                if(temp->left == NULL){
                    temp->left = cur;
                    break;
                }
                temp = temp->left;
            }
            else{
                if(temp->right == NULL){
                    temp->right = cur;
                    break;
                }
                temp = temp->right;
            }
        }
    }
}

int main(){
    insert();
    postorder(root);
}