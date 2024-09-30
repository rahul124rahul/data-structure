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

class B{
	public:
		void printb(){
			cout<<"I am class B\n";
		}
};

class C : public A, public B{
		public:

			void printc(){
				cout<<"I am class C\n";
			}
};


int main(){
	C obj;
	obj.printa();
	obj.printb();
	obj.printc();

	
	
	return 0;
}