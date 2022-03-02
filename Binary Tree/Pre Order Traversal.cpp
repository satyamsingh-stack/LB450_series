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
void preorder(Node *root){
	if(root!=NULL){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
int main(){
	Node *root=new Node(1);
	root->left=new Node(2);
	root->left->left=new Node(3);
	root->right=new Node(4);
	root->right->left=new Node(5);
	root->right->right=new Node(6);
	cout<<"Pre Order Traversal : ";
	preorder(root);
	return 0;
}
