#include<iostream>
using namespace std;

int main()
{
    char str1[20], str2[20];
    cout<< "Enter first string: ";
    cin.get(str1, 20);
    cout<< "Enter second string: ";
    cin.ignore();
    cin.get(str2, 20);
    cout<< endl<< "You enterd: "<< endl;
    cout<< "String1: "<< str1<< endl;
    cout<< "String2: "<< str2<< endl;
    return 0;
}