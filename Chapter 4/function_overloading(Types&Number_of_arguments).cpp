#include<iostream>
#include<iomanip>
using namespace std;

void display(char);
void display(int);
void display(char, int);
void display(int, int);

int main(){
	char ch='a';
	int iNum=25, n=7;
	cout<< "Character Function: ";
	display(ch);
	cout<< "Integer Function: ";
	display(iNum);
	cout<< "Character and Integer Function: ";
	display('*',10);
	cout<< "Two Integer Function: ";
	display(iNum,n);
	return 0;
}

void display(char character){
	for(int i=0; i<5; i++){
		cout<< setw(2)<< character<< endl;
	}
}

void display(int num){
	for(int i=0; i<5; i++){
		cout<< setw(4)<< num*(i+1)<< endl;
	}
}

void display(char character, int n){
	for(int i=0; i<n; i++){
		cout<< setw(2)<< character<< endl;
	}
	
}

void display(int num, int n){
	for(int i=0; i<n; i++){
		cout<< setw(4)<< num*(i+1)<< endl;
	}
}
