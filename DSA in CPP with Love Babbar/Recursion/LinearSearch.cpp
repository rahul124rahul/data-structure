#include<iostream>
using namespace std;

int lSearch(int arr[],int size,int key){
	if(size==0)return -1;
	if(arr[0]==key)return 8-size;
	else return lSearch(arr+1,size-1,key);

}

int main(){

	int arr[] = {23,4,45,56,6,8,89,12};

	int index = lSearch(arr,8,0);

	if(index!=-1)cout<<"The key is found at index : "<<index<<endl;
	else cout<<"The key not found!!!!!!!!!";


	return 0;
}