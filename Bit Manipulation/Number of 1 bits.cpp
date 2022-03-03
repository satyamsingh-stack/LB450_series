// Expected Time Complexity: O(LogN)
// Expected Auxiliary Space: O(1)

#include<bits/stdc++.h>
using namespace std;
int getcount(int n){
	int count=0;
	while(n){
		n=n&(n-1);
		count++;
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	cout<<getcount(n);
	return 0;
}
