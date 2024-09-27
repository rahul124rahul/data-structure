// Comment Here
// Encapsulation

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student{
	private:
		int id;
		string name;
		int age;
	public:
		int getAge(){
			return age;
		}
};

int main(){
	
	student s1;

	cout<<sizeof(student)<<endl;
	cout<<sizeof(s1)<<endl;

	cout<<"ALL is WELL !!!!\n";

	return 0;
}