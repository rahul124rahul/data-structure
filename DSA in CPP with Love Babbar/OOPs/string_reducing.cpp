// Comment Here
// string reducing

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;

	string ans="";
	char c=s[0];
	int cnt=0;

	for(int i=0;i<s.length();i++){
		if(c==s[i])cnt++;
		else{
			ans=ans + c + to_string(cnt);
			c=s[i];
			cnt=1;
		}
	}

	ans=ans + c + to_string(cnt);

	cout<<ans;

	
	
	return 0;
}