#include<iostream>
using namespace std;
class Vehicle{
	string Brand;
	int Speed;
	public:
		void getVehicle(){
			cout<<"Enter Brand: ";
			cin>>Brand;
			
			cout<<"Enter Speed: ";
			cin>>Speed;
		}
		void displayVehicle(){
			cout<<"Brand: "<<Brand<<endl;
			cout<<"SPeed: "<<Speed<<endl;
		}
};

class Car : public Vehicle{
	int doors;
	public:
		void getCar(){
			cout<<"Enter Number of doors: ";
			cin>>doors;
		}
		void displayCar(){
			displayVehicle(); //Calling base class function
			cout<<"Doors: "<<doors<<endl;
		}
};
int main(){
	Car C1;
	C1.getVehicle();
	C1.getCar();
	C1.displayCar();
	return 0;
}
