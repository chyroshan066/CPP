#include<iostream>
using namespace std;

float assign(float &num1, float &num2){
	float avg=(num1+num2)/2;
	if(num1>num2)
		num2=avg;
	else
		num1=avg;
}

int  main(){
	float  num1, num2;
	cout<< "Enter two numbers: ";
	cin>> num1>> num2;
	cout<< "Before calling the function num1="<< num1<< " and num2="<< num2<< endl;
	assign(num1, num2);
	cout<< "After calling the function num1="<< num1<< " and num2="<< num2<< endl;
	return 0;
}
