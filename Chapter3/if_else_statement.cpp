#include<iostream>
using namespace std;

int main(){
	int marks;
	cout<< "Enter your marks in computer programming: ";
	cin>> marks;
	if (marks>=40)
		cout<< "You are passed";
	else
		cout<< "You failed the exam";
	return 0;
}
