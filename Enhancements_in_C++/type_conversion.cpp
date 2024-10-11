#include<iostream>
using namespace std;

int main(){
	int num1=7, num2=9;
	float quot;
	quot=num1/num2;
	cout<< "Without casting: quot="<< quot<< endl;
//	quot=(float)num1/num2;                               //Also valid, C style notation
//	cout<< "After casting: quot="<< quot<< endl;
//	quot=float(num1)/num2;                               //Also valid, improved C++ style notation
//	cout<< "After casting: quot="<< quot<< endl;
	quot=static_cast<float>(num1)/num2;                  // Recommended C++ style type conversion
	cout<< "After casting: quot="<< quot<< endl;
	return 0;
}
