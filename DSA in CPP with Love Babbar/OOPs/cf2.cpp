// Comment Here
// Given an integer N. Print the Premium Prime for N. If not present print -1. 
// Premium Prime is the lowest prime number less than N, such that if N is divided by that number, the rounded down result is also a prime number.
// Eg:
// Input: N=6
// Output: 2

#include<iostream>

using namespace std;

bool isPrime(int n){
	if(n==1)return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}

int main(){
	int n;
	cin>>n;

	int ans=-1;

	if(isPrime(n)){
		cout<<ans<<endl;
	}
	else{
		for(int i=2;i*i<=n;i++){
			if(isPrime(i)){
				if(n%i==0 && isPrime(n/i)){
					ans=i;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}


	
	
	return 0;
}