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
void solution(Node *root,int &max_level,int level,vector<int> &v){
	if(root==NULL)
		return ;
	if(max_level<level){
		v.push_back(root->data);
		max_level=level;
	}
	solution(root->right,max_level,level+1,v);
	solution(root->left,max_level,level+1,v);
}
vector<int> leftview(Node *root){
	vector<int> v;
	int max_level=0,level=1;
	solution(root,max_level,level,v);
	return v;
}
int main(){
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	root->left->left->right=new Node(8);
	vector<int> ans;
	ans=leftview(root);
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	return 0;
}
