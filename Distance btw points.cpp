#include<iostream>
#include<cmath>
using namespace std;
class Point{
	int x,y;
	public:
		Point(int a,int b){
			x=a;
			y=b;
		}
		int getX(){
			return x;
		}
		int getY(){
			return y;
		}
		
};
class Distance{
	float dist;
	public:
		Distance(Point p1,Point p2){
			dist = sqrt(pow(p2.getX()-p1.getX(),2)+ pow(p2.getY()-p1.getY(),2));
		}
		void display(){
			cout<<"Distance = "<<dist<<endl;
		}
};
int main(){
	Point p1(2,3);
	Point p2(8,7);
	
	Distance d(p1,p2);
	
	d.display();
	return 0;
}
