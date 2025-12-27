#include <stdio.h>
#include <stdlib.h>

struct Node{
	char data;
	struct Node *left, *right;
};

struct Node *root = NULL;

struct Node* search_node(struct Node* cur, char data){
	if(cur == NULL) return NULL;
	if(cur -> data == data) return cur;
	struct Node* res = search_node(cur -> left, data);
	if(res != NULL) return res; 
	return search_node(cur -> right, data);
}

void preorder(struct Node* cur){
	if(cur == NULL) return;
	printf("%c", cur->data);
	preorder(cur -> left);
	preorder(cur -> right);
}

void inorder(struct Node* cur){
	if(cur == NULL) return;
	inorder(cur -> left);
	printf("%c", cur->data);
	inorder(cur -> right);
}

void postorder(struct Node* cur){
	if(cur == NULL) return;
	postorder(cur -> left);
	postorder(cur -> right);
	printf("%c", cur->data);
}

int main(){
	int N;
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		char r, a, b;
		scanf(" %c %c %c", &r, &a, &b);
		if(root == NULL){
			root = (struct Node*)malloc(sizeof(struct Node));
			root -> data = r;
			if(a!='.'){
				root -> left = (struct Node*)malloc(sizeof(struct Node));
				root -> left -> data = a;
			}
			else root -> left = NULL;
			if(b != '.'){
				root -> right = (struct Node*)malloc(sizeof(struct Node));
				root -> right-> data = b;
				root -> right -> left = NULL;
				root -> right -> right = NULL;
			}
			else root -> right = NULL;
			continue;
		}
		struct Node* surve = search_node(root, r);
		if(a != '.'){
			surve -> left = (struct Node*)malloc(sizeof(struct Node));
			surve -> left -> data = a;
			surve -> left -> left = NULL;  
    		surve -> left -> right = NULL;
		}
		else{
			surve -> left = NULL;
		}
		if(b != '.'){
			surve -> right = (struct Node*)malloc(sizeof(struct Node));
			surve -> right -> data = b;
			
			surve -> right -> left = NULL;  
    		surve -> right -> right = NULL;
		}
		else{
			surve -> right = NULL;
		}
	}	
		preorder(root);
		printf("\n");
		inorder(root);
		printf("\n");
		postorder(root);
		return 0;
}