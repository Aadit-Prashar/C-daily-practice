#include<iostream>

using namespace std;

int main(){
	int a=10,b=13;
	//Arithmatic operators
	cout<<"Operators in c++:-\n";
	cout<<"These are the types of operators \n";
	cout<<"The value of a+b is:"<<a+b<<"\n";
	cout<<"The value of a-b is:"<<a-b<<"\n";
	cout<<"The value of a*b is:"<<a*b<<"\n";
	cout<<"The value of a/b is:"<<a/b<<"\n";
	cout<<"The value of a%b is:"<<a%b<<"\n";
	cout<<"The value of a++ is:"<<a++<<"\n";
	cout<<"The value of a-- is:"<<a--<<"\n";
	cout<<"The value of ++a is:"<<++a<<"\n";
	cout<<"The value of --a is:"<<--a<<"\n";
	
	//Assignment operators
	cout<<"These are assignment operators \n";
	cout<<"The value of a==b is "<<(a==b)<<"\n";
	cout<<"The value of a!=b is "<<(a!=b)<<"\n";
	cout<<"The value of a>=b is "<<(a>=b)<<"\n";
	cout<<"The value of a<=b is "<<(a<=b)<<"\n";
	cout<<"The value of a>b is "<<(a>b)<<"\n";
	cout<<"The value of a<b is "<<(a<b)<<"\n";
	
	//Logical operators
	cout<<"Following are the logical operators \n";
	cout<<"The value of logical AND operator ((a==b) && (a<b)) is:"<<((a==b)&&(a<b))<<"\n";
	cout<<"The value of logical OR operator ((a==b)||(a<b)) is:"<<((a==b)||(a<b))<<"\n";
	cout<<"The value of logical NOT operator (!(a==b)) is:"<<(!(a==b))<<"\n";
	return 0;
	
}
