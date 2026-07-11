#include<iostream>
using namespace std;

//This will not sap a and b
int swap(int a,int b){
	int temp = a;
	a=b;
	b=temp;
	
}
void swappoint(int* a ,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void swapreferencevar(int &a,int &b){
	int temp =a ;
	a=b;
	b=temp;
}
int main(){
	int x=4, y=5;
	cout<<"The value of x is "<<x<<" and value of y is "<<y<<"\n";
//	swappoint(&x,&y);//It will swap a and b using pointer reference 
	swapreferencevar(x,y);
	cout<<"The value of x is "<<x<<" and value of y is "<<y;
}
