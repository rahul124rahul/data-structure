// Comment Here
// 

#include<iostream>
using namespace std;


class A{
	public:
		void fun(){
			cout<<"Function of class A\n";
		}
};

class B{
	public:
		void fun(){
			cout<<"Function of class B\n";
		}
};

class C : public A, public B{
	public:
		void fun(){
			cout<<"Function of class C\n";
		}
};

int main(){
	
	C c;
	c.fun();
	c.A::fun();
	c.B::fun();
	
	return 0;
}