#include<iostream>
using namespace std;

void square_me(int &a){
	a*=a;
}

int main(){
	int x;
	cout<< "Enter number: ";
	cin>> x;
	square_me(x);
	cout<< x;
	return 0;
}
