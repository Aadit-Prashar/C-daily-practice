#include<iostream>
using namespace std;
class BankDeposite{
	int principal;
	int years;
	float interestrate;
	float returnvalue;
	public:
		BankDeposite(){}
		BankDeposite(int p,int y,float r); //r ca be value like 0.4
		BankDeposite(int p,int y,int r); // r can be value like 14;
		void show();
};
BankDeposite :: BankDeposite(int p,int y,float r){
	principal =p;
	years=y;
	interestrate=r;
	returnvalue=principal;
	for(int i=0; i<y;i++){
		returnvalue=returnvalue * (1+interestrate);
	}
};

BankDeposite :: BankDeposite(int p,int y, int r){
	principal =p;
	years=y;
	interestrate=float(r)/100;
	returnvalue=principal;
	for(int i=0; i<y;i++){
		returnvalue=returnvalue * (1+interestrate);
	}
};

void BankDeposite :: show(){
	cout<<endl<<"Principal amount was "<<principal<<
	"Return value after "<<years<<" years is "<<returnvalue<<endl;
}
int main(){
	BankDeposite bd1,bd2,bd3;
	int p,y;
	float r;
	int R;
	
	cout<<"Enter the value of p , y and r"<<endl;
	cin>>p>>y>>r;
	bd1 = BankDeposite(p,y,r);
	bd1.show();
	
	cout<<"Enter the value of p , y and R"<<endl;
	cin>>p>>y>>R;
	bd2 = BankDeposite(p,y,R);
	bd2.show();
	return 0;	
}
