#include<iostream>
using namespace std;

class Celsius{
    private:
        float temper;
    public:
        Celsius(): temper(0){}
        Celsius(float ftmp){
            temper = ((ftmp-32)*5)/9;
        }
        void showTemper(){
            cout<< "Temperature in Celsius: "<< temper;
        }
};

int main(){
    Celsius cel;                                                         //User-Defined data type
    float fer;                                                           //Basic data type
    cout<< endl<< "Enter temperature in Fahrenheit measurement: ";
    cin>> fer;
    cel = fer;                                                           //Same as,  cel = Celsius(fer);
    cel.showTemper();
    return 0;
}