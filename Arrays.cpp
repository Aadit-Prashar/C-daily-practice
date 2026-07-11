#include<iostream>
using namespace std;
int main(){
	int marks[]={3,4,56,89};
	int mathmarks[4];
	mathmarks[0]=2278;
	mathmarks[1]=981;
	mathmarks[2]=256;
	mathmarks[3]=90;
	cout<<marks[0]<<"\n";
	cout<<marks[1]<<"\n";
	cout<<marks[2]<<"\n";
	cout<<marks[3]<<"\n";
	cout<<"Marks in Maths---------------\n";
	cout<<mathmarks[0]<<"\n";
	cout<<mathmarks[1]<<"\n";
	mathmarks[2]=999;
	cout<<mathmarks[2]<<"\n";
	cout<<mathmarks[3]<<"\n";
	cout<<"-----------------------------------------------------------\n";
//	for (int i=0;i<4;i++){
//		cout<<"The value of marks "<<i<<" is "<<marks[i]<<"\n";
//	}
	int i=0;
	do{
		cout<<"The value of marks "<<i<<" is "<<marks[i]<<"\n";
		i++;
	}while(i<4);
	
	
//	Pointers and array------------------------------------
	int*p =marks;
	cout<<"The value of marks[0] is "<<*p<<"\n";
	cout<<"The value of marks[1] is "<<*(p+1)<<"\n";
	cout<<"The value of marks[2] is "<<*(p+2)<<"\n";
	cout<<"The value of marks[3] is "<<*(p+3)<<"\n";
	return 0;
}
