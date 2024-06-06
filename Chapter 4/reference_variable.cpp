#include<iostream>
using namespace std;

int main(){
	int x=5;
	int &y=x;
	cout<< "Before increasing: x="<< x<< " and y="<< y<< endl;
	y++;
	cout<< "After increasing: x="<< x<< " and y="<< y<< endl;
	return 0;
}
