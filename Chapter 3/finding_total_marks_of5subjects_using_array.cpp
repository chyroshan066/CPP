#include<iostream>
using namespace std;

int main(){
	int marks[5];
	int totalmarks=0;
	cout<< "Enter the marks of the subjects:"<< endl;
	for(int i=0; i<5; i++){
		cin>> marks[i];
	}
	for(int i=0; i<5; i++){
		totalmarks+=marks[i];
	}
	cout<< "The total marks of 5 subjects is "<< totalmarks;
	return 0;
}
