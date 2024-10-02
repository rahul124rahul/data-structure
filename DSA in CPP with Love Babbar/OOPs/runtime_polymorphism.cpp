// Comment Here
// function overiding

#include<iostream>
using namespace std;

class A{
	
	public:
		int a;

		void sound(){
			cout<<"This is sound of class A\n";
		}
};

class B: public A{
	public:
		int b;

		void sound(){
			cout<<"This is sound of class B\n";
		}
};

class C: public A{
	public:
		int c;

		void sound(){
			cout<<"This is sound of class C\n";
		}
};

int main(){
	A o1;
	B o2;
	C o3;

	o1.A::sound();
	o2.A::sound();
	o3.A::sound();

	o1.sound();
	o2.sound();
	o3.sound();
	
	return 0;
}