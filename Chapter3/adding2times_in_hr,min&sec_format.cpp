#include<iostream>
using namespace std;

struct time{
	int hour;
	int min;
	int sec;
};

int main(){
	time t1, t2, t;
	
	cout<< "Enter first time in hour minute second format"<< endl;
	cout<< "Hour: ";
	cin>> t1.hour;
	cout<< "Minute: ";
	cin>> t1.min;
	cout<< "Second: ";
	cin>> t1.sec;
	cout<< endl<<endl;
	
	cout<< "Enter second time in hour minute second format"<< endl;
	cout<< "Hour: ";
	cin>> t2.hour;
	cout<< "Minute: ";
	cin>> t2.min;
	cout<< "Second: ";
	cin>> t2.sec;
	cout<< endl<<endl;
		
	t.sec = (t1.sec+t2.sec)%60;
	t.min = (t1.min+t2.min+((t1.sec+t2.sec)/60))%60;
	t.hour = t1.hour+t2.hour+((t1.min+t2.min)/60);
	
	cout<< "The sum of two times is "<< t.hour<< "hour "<< t.min<< "min "<< t.sec<< "sec";
	
	return 0;
}
