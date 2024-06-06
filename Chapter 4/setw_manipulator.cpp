#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	long pop1=5425678, pop2=47000, pop3=76890;
	cout<< setw(8)<< "LOCATION"<< setw(12)<< "POPULATION"<< endl
		<<setw(8)<< "Patan"<< setw(12)<< pop1<< endl
		<<setw(8)<< "Khotang"<< setw(12)<< pop2<< endl
		<<setw(8)<< "Butwal"<< setw(12)<< pop3<< endl;
	return 0;
}
