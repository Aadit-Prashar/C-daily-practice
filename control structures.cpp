#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Tell me your age:";
	cin>>age;
	if(age>=18){
		cout<<"You are eligible for my party\n";
	}
	else if(age==18){
		cout<<"You are a kid and need a pass to the party\n";
	}
	else{
		cout<<"You are not eligible for my party";
	}
	
	
//Switch case statements
	switch(age){
		case 18:
			cout<<"you are 18\n";
			break;
		case 22:
			cout<<"You are 22\n";
			break;
		case 2:
			cout<<"You are 2\n";
			break;
		default:
		cout<<"No special cases\n";
			break;  
	}
	return 0;
}
