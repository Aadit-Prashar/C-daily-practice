#include<iostream>
using namespace std;
int main(){
//	****************Reference operator*************
	int a=3;
	int * b= &a;
	cout<<"The address of a is "<<&a<<"\n";
	cout<<"The address of a is "<<b<<"\n";
//	& --> Address of operator
//  * --> Dereference operator
// 	*****************DEREFERENCE Operator********************
	cout<<"The value at address b is "<<*b<<"\n";
	
//	*****************POINTER TO POINTER**********************
	int** c = &b;
	cout<<"The address of b is "<<&b<<"\n";
	cout<<"The address of b is "<<c<<"\n";
	cout<<"The value at address c is "<<*c<<"\n";
	cout<<"The value at address c is "<<**c<<"\n";
	return 0;
}
