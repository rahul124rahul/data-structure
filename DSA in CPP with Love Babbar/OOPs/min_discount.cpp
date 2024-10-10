
//  Problem Statement
//  1:1 MOCK SESSION
//  Mayuri buys “Nˮ no of products from a shop. The shop offers a different 
// percentage of discount on each item. She wants to know the item that has 
// the minimum discount offer, so that she can avoid buying that and save 
// money.Input Format: The first input refers to the no of items; the second 
// input is the item name, price and discount percentage separated by 
// comma(,)]Assume the minimum discount offer is in the form of Integer.Note: 
// There can be more than one product with a minimum discount.
//  Sample Input 1
//  4
//  mobile,10000,20
//  shoe,5000,10
//  watch,6000,15
//  laptop,35000,5
//  Sample Output 1
//  shoe



#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=INT_MAX;
	string ans_str;
	vector<string>arr;
	for(int i=0;i<n;i++){
		string s;cin>>s;
		int p;cin>>p;
		int d;cin>>d;
		if(p*d<ans){
			ans=p*d;
			ans_str=s;
		}
	}
	cout<<ans_str<<endl;
	
	
	return 0;
}