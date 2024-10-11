#include<iostream>
using namespace std;

int num=5;

int main(){
	int num=15;
	cout<< "Local Data num="<< num<< endl<< "Global Data num="<< ::num<< endl;
	{
		int num=25;
		cout<< "Local Data num="<< num<< endl<< "Outer Scope Data num="<< ::num<< endl;
	}
	cout<< "Global+Local = "<< ::num+num;
	return 0;
}
