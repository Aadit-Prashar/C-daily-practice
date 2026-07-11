#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		
//		Contructor is a special member function with same name as of the class.
//      It is automatically invoked whenever the object is created .
//		Construtor is used to initialize the objects of its class.
		
		complex(void); //Constructor declared
		void printNumber(){
			cout<<"You number is "<< a << " + " << b <<"i"<<endl;
		}
};

complex :: complex(void){  //This is a default constructor
	a=10;
	b=12;
}
int main(){
	complex c1,c2,c3;
	c1.printNumber();
	c2.printNumber();
	c3.printNumber();
	return 0;
}



//	1. A constructor that does not take any parameter is a default constructor.
//  2. They are automatically invoked whenever object is created.
//	3. They cannot return values and do not have return types.
//  4. It can have default arguments.
//	5. We cannot refer to their address.
