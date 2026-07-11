#include<iostream>
using namespace std;
int main(){
//	*************************FOR LOOP***************************
	for(int i=0;i<40;i++){
		cout<<i<<"\n";
	}
//  *************************WHILE LOOP*************************
	int a=10;
	while(a<=20){
		cout<<a<<"\n";
		a++;
	}
//**************************DO-WHILE LOOP**************************
	int x=1;
	cout<<"*************Table of 6***************\n";
	do{
		cout<<6*x<<"\n";
		x++;
	}while(x<=10);
	return 0;
}
