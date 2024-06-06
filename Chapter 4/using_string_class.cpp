#include<iostream>
#include<string>

using namespace std;

int main(){
	string str1("Digital");
	string str2="Divide";
	string str3;
	str3=str1;
	cout<< "After assigning: "<< str3<< endl;
	cout<< "Enter string: ";
	cin>> str3;
	cout<< "The entered string: "<< str3<< endl;
	str3 = "Bridging "+str1+" "+str2;
	cout<< "After concatenation: "<< str3<< endl;
	string str4(" is essential");
	str3+=str4;
	cout<< "After using += operator: "<< str3<< endl;
	return 0;
}
