#include<iostream>
using namespace std;

int main(){
	for(int i=1; i<=5; i++){
		cout<< endl;
		for(int j=1; j<=10; j++){
			cout<< "\t"<< i*j;
		}
	}
	return 0;
}
