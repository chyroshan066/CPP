#include<iostream>
using namespace std;

int main(){
	int marks;
	cout<< "Enter marks obtained: ";
	cin>> marks;
	if(marks>=80)
		cout<< "Grade: Distinction";
	else if(marks>=60)
		cout<< "Grade: First Division";
	else if(marks>=50)
		cout<< "Grade: Second Division";
	else if(marks>=40)
		cout<< "Grade: Third Division";
	else
		cout<< "Grade: Fail";
	return 0;
}
