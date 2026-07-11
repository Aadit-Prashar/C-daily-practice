#include<iostream>
using namespace std;

int factorial(int n){
	if (n<=1){
		return 1;
	}
	return n*factorial(n-1);
}
int fibonacci(int m){
	if (m<2){
		return 1;
	}
	return fibonacci(m-2)+fibonacci(m-1);
}
int main(){
	int a , b;
	cout<<"Enter a number:";
	cin>>a;
	cout<<"The factorial of "<<a<<" is "<<factorial(a)<<"\n";
	cout<<"Enter another number:";
	cin>>b;
	cout<<"The number at "<<b<<" position in fibonacci sequence is:"<<fibonacci(b);
}
