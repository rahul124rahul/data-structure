// Comment Here
// 

#include<iostream>
using namespace std;

class A{
	public:
		void printa(){
			cout<<"I am class A\n";
		}
};

class B: public A{
	public:
		void printb(){
			cout<<"I am class B\n";
		}
};

class C : public A{
		public:

			void printc(){
				cout<<"I am class C\n";
			}
};

int main(){
	A a;
	B b;
	C c;

	a.printa();

	b.printa();
	b.printb();
	// b.printc();

	c.printa();
	// c.printb(); give error
	c.printc();
	
	return 0;
}