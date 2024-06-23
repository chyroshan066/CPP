#include<iostream>
using namespace std;

float totPrice(int, float);

int main(){
	int n;
	float unitPrice;
	char choose;
	cout<< "Enter the number of items: ";
	cin>> n;
	cout<< "Would you like to enter the unit price for the items. If yes, then enter \'y\' else enter \'n\': ";
	cin>> choose;
	if(choose=='y' || 'Y'){
		cout<< "Enter unit price for the item: ";
		cin>> unitPrice;
		cout<< "The total price is "<< totPrice(n, unitPrice);
	}
	else if(choose=='n' || 'N'){
		cout<< "The total price is "<< totPrice(n, unitPrice);
	}
	return 0;
}

float totPrice(int n, float unitPrice=99){
	return n*unitPrice;
}
