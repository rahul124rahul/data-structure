// Comment Here
// polymorphism - function overloading

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
	public:
		void print(){
			cout<<"My Name is Rahul\n";
		}

		void print(string name){
			cout<<"My name is "<<name<<endl;
		}

      
		// Only data type change is not applicable here

		// int print(string name){
		// 	cout<<"My name is "<<name<<endl;
		// }

		int print(string s,int a){
			cout<<"My name is "<<s<<" and age is "<<a<<" years.\n";
			return a;
		}
};

int main(){
	A obj;
	obj.print();
	obj.print("Rahul");
	obj.print("Rahul",21);
	
	return 0;
}