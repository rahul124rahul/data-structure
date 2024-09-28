// Comment Here
// Inheritance

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class human{
	public:
		int height;
	// private:
		int age;
		int weight;
	public:
		int getAge(){
			return this->age;
		}

		void setAge(int a){
			this->age = a;
		}

};

class male : private human{
	public:
		char gender = 'M';
		string color;
		
		void sleep(){
			cout<<"Male is sleeping.\n";
		}

		int getParentAge(){
			return this->getAge();
		}

		void setParentAge(int a){
			this->setAge(a);
		}
};

int main(){
	
	male o1;

	cout<<o1.getParentAge()<<endl;
	o1.setParentAge(2323);
	cout<<o1.getParentAge()<<endl;
	// o1.setAge(21);
	// cout<<o1.getAge()<<endl;
	o1.sleep();
	cout<<o1.gender<<endl;;
	
	return 0;
}