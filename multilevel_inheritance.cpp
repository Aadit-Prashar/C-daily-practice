#include<iostream>
using namespace std;

class student{
	protected:
		int roll_num;
		public:
			void set_roll_num(int);
			void get_roll_num(void);
};

void student :: set_roll_num(int r){
	roll_num=r;
};
void student :: get_roll_num(){
	cout<<"The roll number is "<<roll_num<<endl;
};

class Exam : public student{
	protected:
		float maths;
		float physics;
		public:
			void set_marks(float, float);
			void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
	maths = m1;
	physics=m2;
}
void Exam :: get_marks(){
	cout<<"The marks obtained in maths are: "<<maths<<endl;
	cout<<"The marks obtained is physics are: "<<physics<<endl;
}

class Result : public Exam{
	float percentage;
	public:
		void display(){
			get_roll_num();
			get_marks();
			cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
		}	
};
int main(){
	Result R1;
	R1.set_roll_num(10);
	R1.set_marks(89,94);
	R1.display();
	return 0;
}
