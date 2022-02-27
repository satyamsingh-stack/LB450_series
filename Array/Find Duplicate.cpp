#include<bits/stdc++.h>
using namespace std;
int findDuplicate(int* arr,int n) {
	int ans;
	for(int i=0;i<n;i++){
		if(arr[abs(arr[i])]>0)
			arr[abs(arr[i])]=-arr[abs(arr[i])];
		else
			ans=abs(arr[i]);
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<findDuplicate(arr,n);
	return 0;
}
