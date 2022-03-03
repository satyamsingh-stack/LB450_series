// The time complexity of the solution is O(n) 

#include<bits/stdc++.h>
using namespace std;
int square(int n){
	if(n<0)
		n=-n;
	int res=n;
	for(int i=1;i<n;i++)
		res=res+n;
	return res;
}
int main(){
	int n;
	cin>>n;
	cout<<square(n);
	return 0;
}
