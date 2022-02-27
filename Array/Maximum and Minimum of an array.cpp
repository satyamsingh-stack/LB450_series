#include<bits/stdc++.h>
using namespace std;
int max_min(int *arr,int n,int *min,int *max){
	*max=*min=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>*max)
			*max=arr[i];
		if(arr[i]<*min)
			*min=arr[i];
	}
}
int main(){
	int n,max,min;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	max_min(arr,n,&max,&min);
	cout<<max<<" "<<min;
	return 0;
}
