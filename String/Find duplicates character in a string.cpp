#include<bits/stdc++.h>
using namespace std;
void solution(string st){
	map<char,int> mp;
	for(auto x:st)
		mp[x]++;
	for(auto x:mp){
		if(x.second>1)
			cout<<x.first<<"Count"<<x.second<<endl;
	}
}
int main(){
	string st;
	getline(cin,st);
	solution(st);
	return 0;
}
