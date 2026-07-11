#include<iostream>
using namespace std;
class Employee{
	int Id;
	int salary;
	public:
		void setId(void){
			cout<<"Enter the id of employee:";
			cin>>Id;
		}
		void setsalary(void){
			cout<<"Enter the salary of employee:";
			cin>>salary;
		}
		void getdetails(void){
			cout<<"The id of this employee is "<<Id<<" and it's salary is "<<salary<<endl;
		} 
};
int main(){
//	Employee harry,rohan,lavish,shruti;
//	harry.setId();
//	harry.getId();
	Employee fb[4];
	for (int i=0;i<4;i++){
		fb[i].setId();
		fb[i].setsalary();
		fb[i].getdetails(); 
	}
	return 0;
}
