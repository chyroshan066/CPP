#include<iostream>
using namespace std;

int main(){
	int n, i, *arr, tot=0;
	float avg;
	cout<< "How many numbers: ";
	cin>> n;
	arr = new int[n];                  //allocates memory
	cout<< "Enter elements: ";
	for(i=0; i<n; i++){
		cin>> arr[i];
	}
//	delete arr;                        
	for(i=0; i<n; i++){
		tot+=arr[i];
	}
	avg= static_cast<float>(tot)/n;
	cout<< "Total = "<< tot<< endl;    //Throws garbage value when, delete operator is used for the array before calculating total and average
	cout<< "Average = "<< avg;
	delete arr;                        //Hence, delete operator should be used only after the use of the variable is over
	return 0;
}
