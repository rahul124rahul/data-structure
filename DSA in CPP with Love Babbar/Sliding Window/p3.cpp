// First -ve number in the sliding window of fixed size

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n ,w;
    cout<<"Enter Size of the array/vector : ";
    cin>>n;
    vector<int>arr;

    cout<<"Enter all "<<n<<" elements : ";

    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }
    cout<<"Enter Size of the Window : ";
    cin>>w;


    // Now i am using while loop

    int i=0,j=0;
    vector<int>ans;
    while(j<n){
        j=i;
        while(j<i+w){
            if(arr[j]<0){
                ans.push_back(arr[j]);
                break;
            }
            j++;
        }
        if(j==i+w){
            ans.push_back(0);
        }
        i++;
        
    }

    cout<<"Answer of the question : \n";
    for(int i=0;i<n-w+1;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}