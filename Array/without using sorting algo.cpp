#include<bits/stdc++.h>
using namespace std;
void withoutsort(int *arr,int n){
	int c0=0,c1=0,c2=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0)
			c0++;
		else if(arr[i]==1)	
			c1++;
		else
			c2++;
	}
	for(int i=0;i<n;i++){
		if(i<c0)
			arr[i]=0;
		else if(i>=c0 && i<c0+c1)
			arr[i]=1;
		else
			arr[i]=2;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	withoutsort(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
