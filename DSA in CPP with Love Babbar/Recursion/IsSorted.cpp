#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
	if(n==0 || n==1)return true;

	if(arr[0]>arr[1])return false;
	else{
		return isSorted(arr+1,n-1);
	}
}

int main(){

	int arr[7] = {1,2,5,5,5,6,7};
	
	if(isSorted(arr,7))
	cout<<"The array is sorted";
	else cout<<"Array is not sorted";

	return 0;
}