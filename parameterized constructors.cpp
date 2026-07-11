#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:	
		complex(int ,int); //Constructor declared
		void printNumber(){
			cout<<"You number is "<< a << " + " << b <<"i"<<endl;
		}
};

complex :: complex(int x,int y){  //This is a parameterized constructor
	a=x;
	b=y;
}
int main(){
//	Impicit call
	complex a(4,6);
	complex b= complex(5,7);
	a.printNumber();
	b.printNumber();
	return 0;
}

