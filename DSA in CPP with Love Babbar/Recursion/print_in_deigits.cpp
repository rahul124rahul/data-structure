#include<iostream>
using namespace std;

void convert(long long n,string arr[]){
	if(n==0) return;
	
	int d=n%10;
	n=n/10;
	convert(n,arr);

	cout<<arr[d]<<" ";

}

int main(){

	long long n;
	cin>>n;
	string arr[] = {"zero","one","two","three","four","five","six","seven","eight","ning"};
	convert(n,arr);

	return 0;
}