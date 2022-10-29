#include<iostream>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
};

node* getNewNode(int data){
	node* temp = new node();
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	
	return temp;
}

node* insert(node* root, int data){
	if(root == NULL){
		root = getNewNode(data);
	}else if(data <= root->data){
		root->left = insert(root->left, data);
	}else{
		root->right = insert(root->right, data);
	}
	
	return root;
}
void preOrder(node* root){
	if(root == NULL) return;
	
	cout<<root->data<<", ";
	preOrder(root->left);
	preOrder(root->right);
}
void inOrder(node* root){
	if(root == NULL) return;
	inOrder(root->left);
	cout<<root->data<<", ";
	inOrder(root->right);	
}
void postOrder(node* root){
	if(root == NULL) return;
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<", ";
}
int main(){
	node* root = NULL;
	
	root = insert(root, 3);
	root = insert(root, 5);
	root = insert(root, 9);
	root = insert(root, 8);
	root = insert(root, 2);
	root = insert(root, 0);
	root = insert(root, 7);
	
	cout<<"The Preorder: "; preOrder(root);
	cout<<"\nThe inOrder: "; inOrder(root);
	cout<<"\nThe PostOrder: "; postOrder(root);
}
