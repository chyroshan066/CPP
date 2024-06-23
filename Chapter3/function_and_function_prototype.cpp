#include<iostream>
using namespace std;

//int sum(int a, int b);     //Function prototyping
int sum(int, int);           //Which is also acceptable
void greet(void);

int main(){
	int num1, num2;
	greet();
	cout<< "Enter two numbers: ";
	cin>> num1>> num2;
	cout<< "The sum of two numbers is "<< sum(num1, num2);     //Here num1 and num2 are actual parameters
	return 0;
}

int sum(int a, int b){    //a and b takes value from actual parameters so, they are formal parameters
	int c = a+b;
	return c;
}

void greet(){
	cout<< "Hello, how are you?"<<endl;
}
