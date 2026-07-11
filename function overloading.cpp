#include<iostream>
using namespace std;
float volume(float s){
	return(s*s*s);
}
float volume(float r,float h){
	return(3.14*r*r*h);
}
float volume(float l, float b, float h){
	return(l*b*h);	
}

int main(){
	cout<<"The volume of cube is "<<volume(5.5)<<"\n";
	cout<<"The volume of cylinder is "<<volume(5,9.5)<<"\n";
	cout<<"The volume of rectangular box is "<<volume(5,6,10)<<"\n";
	return 0;
}
