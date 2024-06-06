#include<iostream>
using namespace std;

int main(){
	int fruit;
	cout<< "Enter the fruit code: ";
	cin>> fruit;
	cout<< "The fruit is "<<endl;
	switch(fruit){
		case 1:
			cout<< "Orange";
			break;
		case 2:
			cout<< "Apple";
			break;
		case 3:
			cout<< "Grape";
			break;
		case 4:
			cout<< "Banana";
			break;
		default:
			cout<< "Fruit not in the list";
	}
	return 0;
}
