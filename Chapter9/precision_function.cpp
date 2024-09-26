#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    cout<< sqrt(2)<< endl;
    cout.precision(2);
    cout<< fixed;  // If we don't write fixed then the above precision statement will print only one number after point (for eg: 1.4). Writing fixed will make print 2 number after point (for eg: 1.41)
    cout<< sqrt(2);
    return 0;
}