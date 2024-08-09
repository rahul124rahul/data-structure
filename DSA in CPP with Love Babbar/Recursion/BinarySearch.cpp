#include<iostream>
using namespace std;

int bSearch(int arr[], int s,int e,int k){
	if(s>e)return -1;
	int mid = s+(e-s)/2;
	
	if(arr[mid]==k)return mid;

	else if(arr[mid]>k)return bSearch(arr,s,mid-1,k);
	return bSearch(arr,mid+1,e,k);
}

int main(){

	int arr[] = {1,2,3,4,5,6,7,8,9};
	int ans = bSearch(arr,0,9,7);

	if(ans!=-1)cout<<"element fount at index : "<<ans;
	else cout<<"Element not found!!!!!!!!";
	return 0;
}