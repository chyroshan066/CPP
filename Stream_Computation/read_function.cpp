#include<iostream>
using namespace std;

int main()
{
    char str[10];
    cout<< "Enter a string: ";
    cin.read(str, 9);
    str[10] = '\0';
    cout<< "You entered: "<< str;
    return 0;
}