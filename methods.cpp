#include<iostream>
using namespace std;
class Employee{
	int id;
	static int count;
	public:
		void setData(void){
			cout<<"Enter the Id:";
			cin>>id;
			count++;
		}
		void getData(void){
			cout<<"The Id of this employee is "<<id<<" an this employee number is "<<count<<endl;
		}
		static void getCount(void){
			cout<<"The value of count is "<<count<<endl;
		}
};
int Employee :: count = 1000;
int main(){
	Employee harry,rohan,lavish;
	harry.setData();
	harry.getData();
	
	Employee::getCount();

	rohan.setData();
	rohan.getData();

	Employee::getCount();
	
	lavish.setData();
	lavish.getData();
	Employee::getCount();	
	return 0;
}
