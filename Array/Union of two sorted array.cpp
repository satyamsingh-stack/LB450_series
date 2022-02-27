#include<bits/stdc++.h>
using namespace std;
int unionoftwoarray(int *arr1,int *arr2,int n,int m){
	unordered_set<int> s1;
	for(int i=0;i<n;i++)
		s1.insert(arr1[i]);
	for(int i=0;i<m;i++)
		s1.insert(arr2[i]);
	return s1.size();
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++)
		cin>>arr1[i];
	for(int i=0;i<m;i++)
		cin>>arr2[i];
	cout<<unionoftwoarray(arr1,arr2,n,m);
	return 0;
}
