#include<iostream>
using namespace std;

int find_max(int a, int b){
    int result;
    if(a > b)
        result = a;
    else
        result = b;
    return result;
}

float find_max(float a, float b){
    float result;
    if(a > b)
        result = a;
    else
        result = b;
    return result;
}

double find_max(double a, double b){
    double result;
    if(a > b)
        result = a;
    else
        result = b;
    return result;
}

char find_max(char a, char b){
    char result;
    if(a > b)
        result = a;
    else
        result = b;
    return result;
}

int main()
{
    int i1 = 15, i2 = 20;
    cout<< "Greater is "<< find_max(i1, i2)<< endl;
    float f1 = 40000.05, f2 = 38000.44;
    cout<< "Greater is "<< find_max(f1, f2)<< endl;
    double d1 = 55.05, d2 = 67.777;
    cout<< "Greater is "<< find_max(d1, d2)<< endl;
    char c1 = 'a', c2 = 'A';
    cout<< "Greater is "<< find_max(c1, c2)<< endl;
    return 0;
}