#include<bits/stdc++.h>
using namespace std;
int  kadanesalgo(int *arr,int n){
	int max_sum=INT_MIN;
	int cur_sum=0;
	for(int i=0;i<n;i++){
		cur_sum=cur_sum+arr[i];
		if(cur_sum>max_sum)
			max_sum=cur_sum;
		if(cur_sum<0)
			cur_sum=0;
	}
	return max_sum;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<kadanesalgo(arr,n);
	return 0;
}
