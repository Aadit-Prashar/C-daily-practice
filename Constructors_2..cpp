#include<iostream>
using namespace std;

class Integer{
	int m,n;
	public:
		Integer(int ,int);
		void display(void){
			cout<<" m ="<<m<<endl;
			cout<<" n ="<<n<<endl;
		}
};
Integer :: Integer(int x,int y){
	m=x;
	n=y;
}
int main(){
	Integer int1(0,100);
	
	Integer int2 = Integer(25,75);
	
	cout<<"OBJECT1"<<endl;
	int1.display();
	
	cout<<"OBJECT2"<<endl;
	int2.display();
	
	return 0;	
}
