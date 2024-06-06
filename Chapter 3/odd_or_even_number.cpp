#include<iostream>
using namespace std;

string decider(int n);

int main(){
	int num;
	cout<< "Enter the number to be decided whether it is odd or even: ";
	cin>> num;
	cout<< "The number "<< num<< " is "<< decider(num);
	return 0;
}

string decider(int n){
	if(n%2==0)
		return "even";
	else
		return "odd";
}
