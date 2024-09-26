// Comment Here
// 

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int a=1;

class Hero{

	int health;
	public:
	// Properties 
	char name[100];
	char level;
	static int age;

	static void func(){
		cout<<"My static age is : "<<age<<endl;
	}

	// Default constructor
	Hero(){
		cout<<"\n\nI am Constructor of Hero Class !!!!!!!!!! \n\n";
	}

	// Parametrized constructor
	Hero(int h,int l){
		this->health = h;
		this->level = l;
		cout<<"\nI am the Parameterized constructor..\n";
	}

	// Parametrized constructor
	Hero(int h,int l,char ch[] ){
		this->health = h;
		this->level = l;
		strcpy(this->name,ch);
		cout<<"\nI am the Parameterized constructor..\n";
	}

	// Copy constructor

	// for static
	Hero(Hero & temp){
		cout<<"\n This is copy constructor..Static\n";
		this->level = temp.level;
		this->health = temp.health;
		strcpy(this->name,temp.name);
	}

		// Following is not working
	// // for dynamic
	// Hero(Hero*& temp){
	// 	cout<<"\n This is copy constructor.. dynamic\n";
	// 	this->level = temp->level;
	// 	this->health = temp->health;
	// }




	void print(){
		// Check out how to use it..
		cout<<"Level is and health is %d{this.health}.";
	}

	int getHealth(){
		return health;
	}

	void setName(char c[]){
		strcpy(this->name,c);
	}

	void setHealth(int h){
		this->health = h;
	}


	void printall(){
		cout<<"\nHealth : "<<this->getHealth();
		cout<<"\nLevel : "<<this->level;
		cout<<"\nHealth : "<<this->name;
	}
	
	~Hero(){
		cout<<"\nCalled Destructor "<<a++<<"\n";
	}

};


int Hero::age = 21;

int main(){
	
	Hero::func();
	// Instance of class = Object
	// Static creation of the object
	Hero obj1;


	obj1.setHealth(100);
	obj1.level = 'B';


	// the size of all the properties created in the class are added up to the sizeof of the object
	cout<<"Size of Object in different cases : "<<sizeof(obj1)<<endl;
	cout<<obj1.getHealth()<<endl;
	cout<<obj1.level<<endl;

	obj1.print();


cout<<endl<<endl;

	// Dynameic creation of the object of class Hero
	Hero * h2 = new Hero;

	h2->setHealth(2000);
	h2->level = 'D';

	cout<<(*h2).getHealth()<<endl;
	cout<<h2->getHealth()<<endl;
	cout<<h2->level<<endl;
	cout<<(*h2).level<<endl;


	delete h2;
	// New onject creation
	Hero *h3 = new Hero(111,'R');

	cout<<(*h3).getHealth()<<endl;
	cout<<h3->level<<endl;







	// Copy constructor
	Hero h4(23,'a');
	Hero ch1(h4);	

	h4.setHealth(00);
	ch1.setHealth(11);
	cout<<h4.getHealth()<<endl;
	cout<<ch1.getHealth()<<endl;

	Hero * h5 = new Hero(122,'b');
	Hero *ch2(h5);
	cout<<h5->getHealth()<<endl;
	cout<<ch2->getHealth()<<endl;
	cout<<h5->level<<endl;
	cout<<ch2->level<<endl;
	h5->printall();
	ch2->printall();


	// 
	char n[6] = "Rahul";
	Hero hh(12,'b',n);

	Hero hh2(hh);

	hh.printall();
	hh2.printall();

	hh.setName("RAHUL GANESH DADGE");

	hh.printall();
	// hh2.setName("Sonu");
	hh2.printall();





	// Uses of static keyword

	cout<<"My age is !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! "<<Hero::age<<endl;

	hh2.age = 22;
	cout<<hh2.age<<endl;

	cout<<hh.age<<endl;

	Hero::func();



	return 0;
}