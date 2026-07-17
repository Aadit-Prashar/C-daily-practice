#include<iostream>
using namespace std;

//	Base class
class Employee{
	public:
		int id;
		float salary;
		Employee(int inpId){
			id=inpId;
			salary=34.0;
		}
		Employee(){}
};

//	Derived class syntax
//	{{class derived-class-name}}; : {{visiblility name}} {{base-class-name}}

//	{
//	class members/methods/etc..
//	}

// Note:
// 1. 	Default visibility mode is private
// 2.	Private Visibility mode: Public members of base class becomes private members of derived class
// 3.	Public Visibility mode: Public members of base class becomes public members of derived class
// 4. 	Private members are never inherited.


// Creating a Programmer class derived from Employee Base Class
class Programmer : public Employee{
	public:
		Programmer(int inpId){
			id=inpId;
		}
		int languageCode=9;
		void getData(){
			cout<<id<<endl;
		}
};

int main(){
	Employee harry(1),rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	Programmer skillF(10);
	cout<<skillF.languageCode <<endl;
	skillF.getData();
	return 0;
}
