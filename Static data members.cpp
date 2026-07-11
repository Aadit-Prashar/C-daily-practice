#include<iostream>
using namespace std;

class Employee{
	int id;
	static int count;
//	static variables also known as class variables.
	public:
		void setData(void){
			cout<<"Enter the Id:";
			cin>>id;
			count++;	
		}
		void getData(void){
			cout<<"The id of this employee is "<<id<<" and the employee number is "<<count<<endl;
		}
};
int Employee :: count;
int main(){
	Employee harry,rohan,lavish;
	harry.setData();
	harry.getData();
	
	rohan.setData();
	rohan.getData();
	
	lavish.setData();
	lavish.getData();
	return 0;
}
