#include<iostream>
using namespace std;

int main(){
	int sum, i=1;
//	for(int i=1; i<=40; i++){
//		cout<< "\t"<< i;
//	}
	//In for loop multiple variables can be initialized by separating with comma. Same is the case for increment or decrement operator
	for(sum=0, i; i<=40; sum+=i, i++);
		cout<< "Sum = "<< sum;
	return 0;
}
