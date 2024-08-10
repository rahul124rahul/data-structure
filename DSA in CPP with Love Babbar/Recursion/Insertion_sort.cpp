// Insertion sort by using the recursion

#include<iostream>
using namespace std;

// Treditional logic of insertion sort
void insertionSort(int *arr,int n){
	for(int i=0;i<n;i++){
		int temp = arr[i];
		int j=i-1;
		for(j;j>=0;j--){
			if(arr[j]<=temp)break;
			else{
				arr[j+1]=arr[j];
			}
		}
		arr[j+1]=temp;
	}
}



void Insertion_sort(int *arr,int n,int i){
	if(i==n)return;
	int temp = arr[i];
	int j=i-1;
	for(j;j>=0;j--){
		if(arr[j]<=temp)break;
		else{
			arr[j+1]=arr[j];
		}
	}
	arr[j+1]=temp;
	Insertion_sort(arr,n,i+1);
}

int main(){

	int arr[]={6,45,34,23,5,78,1,-1,2,-4};
	int n = sizeof(arr)/sizeof(int);

	Insertion_sort(arr,n,1);
	for(auto i:arr)cout<<i<<" ";

	cout<<"\n---\n";

	int arr1[]={6,45,34,23,5,78,1,-1,2,-4};
	insertionSort(arr1,n);
	for(auto i:arr)cout<<i<<" ";

	

	return 0;
}