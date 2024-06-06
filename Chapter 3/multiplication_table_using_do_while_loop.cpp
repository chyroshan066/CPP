#include<iostream>
using namespace std;

int main(){
	int x, i=1;
	cout<< "Enter the number whose table you want to display: ";
	cin>> x;
	do{
		cout<< x*i<< "\t";
		i++;
	}while(i<=10);
	return 0;
}

