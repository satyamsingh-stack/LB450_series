#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left,*right;
	Node(int k){
		data=k;
		left=right=NULL;
	}
};
void inorder(Node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
Node *mirror(Node *root){
	if(root==NULL){
		return NULL;
	}
	Node *temp=root->left;
	root->left=root->right;
	root->right=temp;
	if(root->left!=NULL)
		mirror(root->left);
	if(root->right!=NULL)
		mirror(root->right);
	return root;
}
int main(){
	Node *root=new Node(5);
	root->left=new Node(3);
	root->right=new Node(6);
	root->left->left=new Node(2);
	root->left->right=new Node(4);
	mirror(root);
	inorder(root);
	return 0;
}
