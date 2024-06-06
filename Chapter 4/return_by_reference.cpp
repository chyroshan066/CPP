#include<iostream>

using namespace std;

int &max(int &x, int &y){
	if(x>y)
		return x;
	else
		return y;
}

int main(){
	int a=5, b=10;
	cout<< "Before calling a="<< a<< " and b="<< b<< endl;
	max(a,b)=-5;
	cout<< "After calling a="<< a<< " and b="<< b<< endl;
	return 0;
}
