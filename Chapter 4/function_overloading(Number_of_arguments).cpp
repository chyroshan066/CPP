#include<iostream>
using namespace std;

void display(int);
void display(int, int);

int main(){
	int a=5, b=6;
	cout<< "One Argument Function: ";
	display(a);
	cout<< "Two Argument Function: ";
	display(a,b);
	return 0;
}

void display(int a){
	cout<< a<< endl;
}

void display(int a, int b){
	cout<< a<< " and "<< b;
}

