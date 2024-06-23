#include<iostream>
#define PI 3.14159
using namespace std;

int main(){
	int r;
	float A,P;
	cout<< "Enter the radius of circle";
	cin>> r;
	A = PI*r*r;
	P = 2*PI*r;
	cout<< "The area of circle is "<< A<< " and the perimeter is "<< P;
	return 0;
}
