#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double x=123.456, y=789.654;
    cout<< fixed<< showpoint<< setprecision(2);
    cout<< "x is "<< x<< endl
        << "y is "<< y<< endl;
    return 0;
}