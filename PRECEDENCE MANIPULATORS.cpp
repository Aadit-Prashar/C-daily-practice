#include<iostream>
#include<iomanip>
using namespace std;
int main(){
//	Contant in c++
	const float x=3.11;
	cout<<"The value of x is:"<<x<<endl;
//	a=45.6;(This gives an error as it is defined as constant above already)
	
//****************** Manipulators in C++ *******************
	int a=4,b=78, c=1233;
	cout<<"The value of a without setw is:"<<a<<"\n";
	cout<<"The value of b without setw is:"<<b<<"\n";
	cout<<"The value of c without setw is:"<<c<<"\n";
	
	cout<<"The value of a with setw is:"<<setw(4)<<a<<"\n";
	cout<<"The value of b with setw is:"<<setw(4)<<b<<"\n";
	cout<<"The value of c with setw is:"<<setw(4)<<c<<"\n";
//****************** OPERATOR PRECEDENCE ********************
	int d=5, e= 10;
	int f=((a*5)+b)+45;
	cout<<"The value of f after calcuating is:"<<f<<"\n";
	return 0;
}
