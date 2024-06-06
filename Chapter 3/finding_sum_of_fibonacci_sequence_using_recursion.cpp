#include<iostream>
using namespace std;

int fibo(int n);
int fiboSum(int n);

int main(){
	int num;
	cout<< "Enter the number upto which you want to find the sum of fibonacci series: ";
	cin>> num;
	cout<< "The sum of fibonacci series is: "<< fiboSum(num);
	return 0;
}

int fibo(int n){
	if(n<=1)
		return n;
	else
		return fibo(n-1)+fibo(n-2);
}

int fiboSum(int n){
	int sum=0;
	for(int i=0; i<=n; i++)
		sum+=fibo(i);
	return sum;
}
