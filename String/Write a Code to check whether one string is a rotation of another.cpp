#include<bits/stdc++.h>
using namespace std;
bool solution(string st1,string st2){
	string st3=st1+st1;
	return st3.find(st2);
}
int main(){
	string st1,st2;
	cin>>st1>>st2;
	cout<<solution(st1,st2);
	return 0;
}
