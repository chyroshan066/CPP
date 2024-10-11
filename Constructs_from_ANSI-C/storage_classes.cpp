#include<iostream>
using namespace std;

int a=10;

void demo();
void count();

class val
{
	public:
		mutable int x;                              //'mutable' keyword can modify the value of a class even though the variable is declared constant
		int y;
};

int main(){
	const val v1={4,8};
	v1.x = 16;
	demo();
	cout<< "Value of a in main is "<< a;
	cout<< endl<< endl;
	count();
	count();
	count();
	cout<< endl<< endl;
	cout<< "x="<< v1.x<< endl<< "y="<< v1.y;
	return 0;
}

void demo(){
	extern int a;                                    //External variable cannot be initialized
	a=20;
	cout<< "Value of a in demo is "<< a<< endl;
}

void count(){
	static int num;                                //Variable is initialized only once i.e, memory is allocated only once to the variable. When static variable is not initialized, it is assigned the value zero
	num++;
	cout<< num<< "\t";
}

