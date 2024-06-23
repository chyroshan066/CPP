#include<iostream>
using namespace std;

struct currency{
	int rupees;
	float paise;
};

int main(){
	currency c1, c3;
	currency c2={123, 56.4};
	cout<< "Enter Rupees: ";
	cin>> c1.rupees;
	cout<< "Enter Paise: ";
	cin>> c1.paise;
	c3.paise = c1.paise+c2.paise;
	c3.rupees = (c1.rupees+c2.rupees+(c1.paise+c2.paise)/100);
	if(c3.paise>=100.00){
		c3.paise-=100.00;
	}
	c3.rupees = c2.rupees+c1.rupees;
	cout<< "Rs."<< c1.rupees<< " Ps."<< c1.paise<< " + "
		<< "Rs."<< c2.rupees<< " Ps."<< c2.paise<< " = "
		<< "Rs."<< c3.rupees<< " Ps."<< c3.paise;
	return 0;
}
