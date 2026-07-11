#include<iostream>
using namespace std;

class Student{
	string name;
	int age;
	public:	
		Student(string data1,int data2){
			name=data1;
			age=data2;
		}  
		void display();
};
void Student :: display(){
	cout<<"Student Name: "<<name<<endl;
	cout<<"Student Age: "<<age<<endl;
}
int main(){
	Student s("Rahul",19);
	s.display();
	return 0;
}
