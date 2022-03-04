#include<iostream>
using namespace std;
int solve(int **arr,int r,int c){
	int sum,res=0;
	for(int i=0;i<r;i++){
		sum=0;
		for(int j=0;j<c;j++){
			sum=sum+arr[i][j];
			res=max(sum,res);
		}
	}
	return res;
}
int main(){
	int r,c;
	cin>>r>>c;
	int **arr;
	arr=new int*[r];
	for(int i=0;i<r;i++)
		arr[i]=new int[c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			cin>>arr[i][j];
	}
	cout<<solve(arr,r,c);
}
