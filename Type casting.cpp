#include<iostream>
using namespace std;
int main(){
	float d=34.4F;
	long double e=34.4L;
	cout<<"The size of 34.4 is "<<sizeof(34.4)<<"\n";
	cout<<"The size of 34.4f is "<<sizeof(34.4f)<<"\n";
	cout<<"The size of 34.4F is "<<sizeof(34.4F)<<"\n";
	cout<<"The size of 34.4L is "<<sizeof(34.4L)<<"\n";
	cout<<"The size of 34.4l is "<<sizeof(34.4l)<<"\n";
	cout<<"The value of d is:"<<d<<"\nThe value of e is:"<<e<<"\n";
	
//	**************************REFERENCE VARAIABLE***************************
	float x= 455;
	float & y = x;
	cout<<x<<"\n";
	cout<<y<<"\n";
//	**************************TypeCasting********************************
	int a=45;
	float b=45.46;
	cout<<"The value of a is:"<<(float)a<<"\n";
	cout<<"The value of a is:"<<float(a)<<"\n";
	
	cout<<"The value of b is:"<<(int)b<<"\n";
	cout<<"The value of b is:"<<int(b)<<"\n";
	int c = int(b);
	
	cout<<"The expression is:"<<a+b<<"\n";
	cout<<"The expression is:"<<a+int(b)<<"\n";
	cout<<"The expression is:"<<a+(int)b<<"\n";
	return 0;
}
