// Maximum sum of variable sized window/subarray and lengtht of it

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of the array/vector : ";
    cin>>n;
    vector<int>arr;

    cout<<"Enter all "<<n<<" elements : ";

    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }

    int fm=-1000000;
    int l=0;
    int ss =0;
    for(int w=1;w<=n;w++){
        ss+=arr[w-1]; 
        int s=ss,m = ss;

        for(int i=w ; i<n;i++){
            s-=arr[i-w];
            s+=arr[i];
            m=max(m,s);
        }
        if(fm<m){
            fm=m;
            l=w;
        }
    }

    cout<<"Maximum sum : "<<fm<<" & length : "<<l<<endl;
    

    return 0;
}