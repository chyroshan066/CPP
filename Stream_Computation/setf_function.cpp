#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout.width(8);
    cout.fill('#');
    cout.setf(ios::left, ios::adjustfield);
    cout<< 456;
    return 0;
}




