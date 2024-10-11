#include<iostream>
using namespace std;

class Celsius{
    private:
        float temp;
    public:
        Celsius(){}
        Celsius(float t): temp(t){}
        float toFahrenheit(){
            return (((9.0/5.0)*temp)+32);
        }
};

class Fahrenheit{
    private:
        float temp;
    public:
        Fahrenheit(){}
        Fahrenheit(float t): temp(t){}
        float toCelsius(){
            return (((temp-32)*5)/9.0);
        }
};

int main(){
    Fahrenheit F;
    Celsius C;
    float cel, fah;
    cout<< "Enter temperature in Celsius: ";
    cin>> cel;
    cout<< "Enter temperature in Fahrenheit: ";
    cin>> fah;
    F = Fahrenheit(fah);
    C = Celsius(cel);
    cout<< cel<< "C in Fahrenheit scale is "<< C.toFahrenheit()<< "F"<< endl;
    cout<< fah<< "F in Celsius scale is "<< F.toCelsius()<< "C"<< endl;
    return 0;
}