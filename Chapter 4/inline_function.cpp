#include<iostream>
#include<cmath>
using namespace std;

inline float degtorad(float deg){
	return (deg*M_PI/180);
}

int main(){
	float deg1, deg2;
	cout<< "Enter angle in degree: ";
	cin>> deg1;
	cout<< deg1<< " Degree = "<< degtorad(deg1)<< " Radian"<< endl;
	cout<< "Enter another angle in degree: ";
	cin>> deg2;
	cout<< deg2<< " Degree = "<< degtorad(deg2)<< " Radian"<< endl;
	return 0;
}
