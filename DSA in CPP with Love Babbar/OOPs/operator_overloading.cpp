// Comment Here
// 

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class A{
	public:

		int a;int b;

		void operator+ (A &obj){
			int v1 = this->a;
			int v2 = obj.a;
			cout<<"Output : "<<v2-v1<<endl;
		}

		void operator() (){
			cout<<"This is operator overloading of operator () \n";
		}
};

int main(){
	A o1;
	A o2; 

	o1.a=21;
	o2.a=40;

	o1 + o2;
	o1 ();	
	return 0;
}