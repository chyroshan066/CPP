#include<iostream>
using namespace std;

int main(){
	cout<< "The size of 34.4 is "<< sizeof(34.4)<< endl;        // By default, the decimal is double
	cout<< "The size of 34.4f is "<< sizeof(34.4f)<< endl;      // Now, the data type of the number is floating point
	cout<< "The size of 34.4F is "<< sizeof(34.4F)<< endl;      // Here also, the data type of the number is floating point ('f' or 'F' doesnot matter)
	cout<< "The size of 34.4l is "<< sizeof(34.4l)<< endl;      // Now, the data type of the number is long double
	cout<< "The size of 34.4L is "<< sizeof(34.4L)<< endl;      // Here also, the data type of the number is long double ('l' or 'L' doesnot matter)
	return 0;
}
