#include<iostream>
int glo=6;
void sum(){
	int a;
	std::cout<<glo;
}
int main(){
	int glo=9;
	glo=78;
	int a=14, b=15;
	float pi=3.14;
	char c='d';
	bool is_true=true;
	sum();
	std::cout<<glo<<is_true;
	return 0;
}
