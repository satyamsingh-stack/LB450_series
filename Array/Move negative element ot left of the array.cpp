#include<bits/stdc++.h>
using namespace std;
void move(int *arr,int n){
	sort(arr,arr+n);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	move(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
