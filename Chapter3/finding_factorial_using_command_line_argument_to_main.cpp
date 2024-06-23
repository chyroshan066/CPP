#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
	int i,n;
	long fact=1;
	if(argc!=2){
		cout<< "\nUses num"<< argv[0];
		exit(1);
	}
	n=atoi(argv[1]);
	for(i=1; i<=n; i++)
		fact*=i;
	cout<< "\nFactorial of "<< n<< " = "<< fact;
	return 0;
}
