#include<bits/stdc++.h>
using namespace std;
void merge(int *arr1,int *arr2,int n,int m){
	int i=n-1,j=0;
	while(i>=0 && j<m){
		if(arr1[i]>arr2[j])
			swap(arr1[i],arr2[j]);
		i--;
		j++;
	}
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++)
		cin>>arr1[i];
	for(int i=0;i<m;i++)
		cin>>arr2[i];
	merge(arr1,arr2,n,m);
	for(int i=0;i<n;i++)
		cout<<arr1[i]<<" ";
	for(int i=0;i<m;i++)
		cout<<arr2[i]<<" ";
	return 0;
}
