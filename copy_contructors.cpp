#include<iostream>
using namespace std;
class Number{
	int a;
	public:
		Number(){
			a=0;
		};
		Number(int num){
			a=num;
		};
		
		Number(Number &obj){
			cout<<"Copy constructor called\n";
			a=obj.a;
		};
//		When no copy constructor is found, compiler supplies ts own copy constructor
		
		void display(){
			cout<<"The number for this object is "<<a<<endl;
		};
};
int main(){
	Number x,y,z(45);
	x.display();
	y.display();
	z.display();
	Number z1(x);
	z1.display();
	
	return 0;
}
