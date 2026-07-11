#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=30;i++){
		if(i==20){
			break;
		}
		cout<<i<<"\n";
	}
	cout<<"****************CONTINUE**************\n";
	for(int a=1;a<=30;a++){
		if(a==10){
			continue;
		}
		cout<<a<<"\n";
	}
	return 0;
}
