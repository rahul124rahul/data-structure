// Bullbe sort by using recursion 
// Idea of base case and the (change in)recursive call  is very important


#include<iostream>
using namespace std;

void bubble_sort(int *arr,int n){
	if(n==0 || n==1)return;
	
	// Ek case solve karana hai
	for(int i=1;i<n;i++){
		if(arr[i-1]>arr[i])swap(arr[i-1],arr[i]);
	}

	bubble_sort(arr,n-1);
}

int main(){
	int arr[] = {2,6,8,1,4,9,3,-2,77,45};
	
	int n = sizeof(arr)/sizeof(int);
	bubble_sort(arr,n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}