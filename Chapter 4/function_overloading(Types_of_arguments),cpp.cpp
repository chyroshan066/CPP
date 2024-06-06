#include<iostream>
using namespace std;

void display(char);
void display(int);
void display(float);

int main(){
	char ch='a';
	int iNum=25;
	float fNum=54.1;
	cout<< "Character function: ";
	display(ch);
	cout<< "Integer function: ";
	display(iNum);
	cout<< "Float function: ";
	display(fNum);
	return 0;
}

void display(char character){
	cout<< character<< endl;
}

void display(int Integer){
	cout<< Integer<< endl;
}

void display(float Decimal){
	cout<< Decimal<< endl;
}
