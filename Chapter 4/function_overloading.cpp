#include<iostream>
using namespace std;

int max(int, int);
long max(long, long);
float max(float, float);
char max(char, char);

int main(){
	int i1=15, i2=20;
	cout<< "Greater integer is: "<< max(i1, i2)<< endl;
	long l1=40000, l2=38000;
	cout<< "Greater long integer is: "<< max(l1, l2)<< endl;
	float f1=55.05, f2=67.777;
	cout<< "Greater float is: "<< max(f1, f2)<< endl;
	char c1='a', c2='A';
	cout<< "Greater char is: "<< max(c1, c2)<< endl;
	return 0;
}

int max(int i1, int i2){
	return (i1>i2?i1:i2);
}

long max(long l1, long l2){
	return (l1>l2?l1:l2);
}

float max(float f1, float f2){
	return (f1>f2?f1:f2);
}

char max(char c1, char c2){
	return (c1>c2?c1:c2);
}
