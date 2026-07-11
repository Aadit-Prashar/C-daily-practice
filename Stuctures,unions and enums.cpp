#include<iostream>
using namespace std;

struct employee{
	int eID;
	char favchar;
	float salary;
};
int main(){
	struct employee aadit;
	struct employee anurag;
	aadit.eID=1;
	aadit.favchar='D';
	aadit.salary= 200000;
	anurag.eID=2;
	anurag.favchar='A';
	anurag.salary= 900000;
	cout<<"The employee ID is "<<aadit.eID<<"\n";
	cout<<"The value of aadit's salary is $"<<aadit.salary<<"\n";
	cout<<"The employee ID is "<<anurag.eID<<"\n";
	cout<<"The value of aadit's salary is $"<<anurag.salary<<"\n";
cout<<"---------------------------Union-----------------------------\n";	
union money{
	int rice;
	char car;
	float pounds;
};	
	union money m1;
	m1.rice=34;
	m1.car='c';
	cout<<m1.car<<"\n";
	
cout<<"---------------------------ENUM------------------------------\n";
	enum Meal{breakfast,lunch,dinner};
	cout<<breakfast<<"\n";
	cout<<lunch<<"\n";
	cout<<dinner<<"\n";
	return 0;
}
