//  Bela teaches her daughter to find the factors of a given number. When she 
// provides a number to her daughter, she should tell the factors of that number. 
// Help her to do this, by writing a program. Write a class FindFactor.java and 
// write the main method in it.
//  Note :
//  If the input provided is negative, ignore the sign and provide the output. If 
// the input is zero
//  If the input is zero the output should be “No Factorsˮ.
//  Sample Input 1
//  54
//  Sample Output 1
//  1, 2, 3, 6, 9, 18, 27, 54

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	n=abs(n);

	if(n==0)cout<<"No Factors"<<endl;
	
	vector<int>ans;

	for(int i=1;i*i<=n;i++){
		if(n%i==0)ans.push_back(i);
	}

	int t = ans.size();
	for(int i=t-1;i>=0;i--){
		if(n/ans[i]!=ans[i])ans.push_back(n/ans[i]);
	}

	for(auto i:ans)cout<<i<<" ";
	
	return 0;
}