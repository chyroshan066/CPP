#include<iostream>
#include<string>
using namespace std;

class binary{
	string s;
	public:
		void read();
		void chk_bin();
		void ones_complement();
		void display();
};

void binary::read(){
	cout<< "Enter a binary number: ";
	cin>> s;
}

void binary::chk_bin(){
	for (int i=0; i<s.length(); i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<< "Incorrect binary format."<< endl;
			exit(0);
		}
	}
	cout<< "Correct binary format."<< endl;
}

void binary::ones_complement(){
	for (int i=0; i<s.length(); i++){
		if(s.at(i)=='0'){
			s.at(i)=1;
		}
		else{
			s.at(i)=0;
		}
	}
}

void binary::display(){
	chk_bin();
	cout<< "Displaying binary information: "<< endl;
	for (int i=0; i<s.length(); i++){
		cout<< s.at(i);
	}
	cout<< endl;
}

int main(){
	binary b;
	b.read();
//	b.chk_bin();
	b.display();
	b.ones_complement();
	b.display();
	return 0;
}
