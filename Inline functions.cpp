#include<iostream>
using namespace std;
inline int product(int a,int b){
	return a*b;
}
float moneyrecieved(int current_money, float factor=1.04){
	return current_money*factor;
}
int main(){
//	int a,b;
//	cout<<"Enter the value of a and b\n";
//	cin>>a>>b;
//	cout<<"The value of product of a and b is:"<<product(a,b);
	int money = 10000;
	cout<<"If u have "<<money<<" in ur bank account,you will recieve Rs."<<moneyrecieved(money)<<" after 1 year\n";
	cout<<"If u have VIP,you will recieve "<<moneyrecieved(money,1.1)<<" after 1 year";	return 0;
}
