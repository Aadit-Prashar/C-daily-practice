#include<iostream>
using namespace std;

class Names{
	string Name1;
	string Name2;
	public:
		Names(string a, string b){
			Name1=a;
			Name2=b;
		}
		void printName();
};
void Names :: printName(){
	cout<<"The Names of students are "<<Name1<<" and "<<Name2<<endl;
}
int main(){
	Names n("Aadit","Arshiya");
	n.printName();
	return 0;
}
