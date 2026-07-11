#include<iostream>
using namespace std;

int sum(int a,int b);

int main(){
	int num1,num2;
	cout<<"Enter first number:\n";
	cin>>num1;
	cout<<"Enter second number:\n";
	cin>>num2;
	cout<<"The sum of num1 and num2 is:"<<sum(num1,num2);
}
//num 1 and num 2 are actual parameters
int sum(int a,int b){
	int c=a+b;
	return c;
	
//	a and b are formal parameters taking values from ctual parmeters
}
