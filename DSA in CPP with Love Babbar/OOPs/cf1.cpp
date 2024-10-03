// Comment Here

// Check whter the given string is palindrome or not. If it is palindrome print length of the string and if it is not print the ascii code for first alpha bet 
// For eg. 

// Input 
// Nitin
// Output is 5

// Input
// Abcdef
// Output is 65

#include<iostream>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    string s =s1;

    int n = s.length();
    for(int i=0;i<n;i++){
        if(islower(s[i])){
            s[i] = s[i]-32;
        }
    }
    int i=0,j=n-1;

    while(i<j){
        if(s[i]==s[j]){
            i++;j--;
        }
        else{
            break;
        }
    }

    if(i>=j)cout<<"Palindrome";
    else {
        cout<<int(s[0]);
    }

    return 0;
}