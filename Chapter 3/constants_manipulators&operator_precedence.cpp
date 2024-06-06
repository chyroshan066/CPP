#include<iostream>
#include<iomanip>              //Manipulator header file
using namespace std;

int main (){
	int a=5;
	cout<< "The value of a is "<< a<< endl;
	a=9;
	cout<< "The value of a is "<< a<< endl;
	cout<< endl<< endl;
	
	//Constants in C++
	const float b=3.143;
	cout<< "The value of b is "<< b<< endl;
//	b=9.269;                                        //Value not assignable
//	cout<< "The value of b is "<< b<< endl;
	cout<< endl<< endl;
	
	//Manipulators in C++
	cout<< "The value of a without setw is "<< a<< endl;
	cout<< "The value of a with setw is "<< setw(3)<< a<< endl;
	
	return 0;
}
