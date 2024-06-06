#include<iostream>
using namespace std;

void func(const int &, int &);

int main(){
	int a=10, b=20;
	func(a,b);
	return 0;
}

void func(const int &x, int &y){
//	x=100;     //Invalid since const keyword is used. So we cannot change the value of the arguments
	y=200;     //Valid
}
