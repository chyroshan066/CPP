#include<iostream>
using namespace std;

void marks_tot(int m1=40, int m2=40, int m3=40);
//void marks_tot(int m1, int m2=40, int m3=40);      //Valid
//void marks_tot(int m1=40, int m2=40, int m3);      //Invalid; Default arguments should be written at the right side of the function parameters and all necessary/important arguments should be written at the left side of the function parameters

int main(){
	marks_tot();
	marks_tot(55);
	marks_tot(66,77);
	marks_tot(75,85,92);
	return 0;
}

void marks_tot(int m1, int m2, int m3){
	cout<< "Total Marks: "<< m1+m2+m3<< endl;
}
