#include<bits/stdc++.h>
using namespace std;
int reverse(int *arr,int n){
	int beg=0,end=n-1;
	while(beg<=end){
		arr[beg]=(arr[beg]^arr[end])^(arr[end]=arr[beg]);
		beg++;
		end--;
	}
	return n;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	reverse(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
