#include<iostream>
#include<limits>
using namespace std;

int main(){
	cout<< "largest float = "<< numeric_limits<float>::max()<< endl;
	cout<< "char is signed = "<< numeric_limits<char>::is_signed;
	return 0;
}
