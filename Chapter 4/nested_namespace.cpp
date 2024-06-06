#include<iostream>

using namespace std;
namespace outer
{
	int num;
	void display(int n)
	{
		cout<< n<< endl;	
	}
	namespace inner
	{
		int var=100;
	}
}

using namespace outer;
int main(){
	cout<< inner::var<< endl;
	display(2000);
	return 0;
}
