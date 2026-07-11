#include<iostream>
using namespace std;

class Employee{
	string name;
	int id;
	float salary;
	public:
		Employee(string data1,int data2,float data3){
			name=data1;
			id=data2;
			salary=data3;
		}
		void display();
		void increaseSalary(float increase);
};
void Employee :: display(){
	cout<<"Employee Name: "<<name<<endl;
	cout<<"Employee ID: "<<id<<endl;
	cout<<"Salary: "<<salary<<endl;	
};
void Employee :: increaseSalary(float increase){
	salary=salary+increase;
};
int main(){
	Employee E1("Aman",101,45000);
	E1.display();
	E1.increaseSalary(5000);
	E1.display();
	return 0;
};
