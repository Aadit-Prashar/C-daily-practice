#include<iostream>
#include<string>
using namespace std;
//
//class shop{
//	int itemId[100];
//	int itemPrice[100];
//	int counter;
//	public:
//		void initCounter(void) {counter = 0;}
//		void setPrice(void);
//		void displayPrice(void);
//};
//void shop :: setPrice(void) {
//	cout<<"Enter Id of your item no. "<<counter+1<<endl;
//	cin>>itemId[counter];
//	cout<<"Enter price of your item: "<<endl;
//	cin>>itemPrice[counter];
//	counter ++;
//}
//void shop :: displayPrice(void){
//	for (int i=0; i<counter ; i++){
//		cout<<"The price of item with Id "<<itemId[i]<<" is " <<itemPrice[i]<<endl;
//	};
//};
//int main(){
//	shop dukaan;
//	dukaan.initCounter();
//	dukaan.setPrice();
//	dukaan.setPrice();
//	dukaan.setPrice();
//	dukaan.displayPrice();
//	return 0;
//}

class Room{
	int Rollno[100];
	string Name[100];
	int counter;
	public:
		void initCounter() {counter=0;}
		void setRoll(void);
		void setName(void);
		void showdetail(void);		
};
void Room :: setRoll(void){
	cout<<"Enter the Roll no. of student:"<<endl;
	cin>>Rollno[counter];
};
void Room :: setName(void){
	cout<<"Enter the Name of the student:"<<endl;
	cin>>Name[counter];
	counter++;
};
void Room :: showdetail(void){
	for (int i=0;i<counter;i++){
		cout<<"The name of Student with Roll no. "<<Rollno[i]<<" is "<<Name[i]<<endl;
	};
};
int main(){
	Room classroom;
	classroom.initCounter();
	
	classroom.setRoll();
	classroom.setName();
	
	classroom.setRoll();
	classroom.setName();
	
	classroom.setRoll();
	classroom.setName();
	
	classroom.showdetail();
	
	return 0;
}
