#include<iostream>
using namespace std;
class Employee{
	string Name;
	int Id;
	public:
		float basic_salary;
		void getEmployee(){
			cout<<"Enter Name: "<<endl;
			cin>>Name;
			
			cout<<"Enter Id: "<<endl;
			cin>>Id;
			
			cout<<"Enter Basic Salary: "<<endl;
			cin>>basic_salary;
		};
		float getSalary(){
			return basic_salary;
		}
		void displayEmployee(){
			cout<<"\nName: "<<Name<<endl;
			cout<<"ID: "<<Id<<endl;
			cout<<"Basic_salary: "<<basic_salary<<endl;
		}
};

class Manager : public Employee{
	float bonus;
	public:
		void getManager(){
			cout<<"Enter bonus: ";
			cin>>bonus;
		};
		float gross(){
			return basic_salary+bonus;	
		};
		void show_Manager(){
			displayEmployee();
			cout<<"Bonus: "<<bonus<<endl;
			cout<<"Gross salary: "<<gross()<<endl;
		}	
};
int main(){
	Manager m1;
	m1.getEmployee();
	m1.getManager();
	m1.show_Manager();
	
	return 0;
}
