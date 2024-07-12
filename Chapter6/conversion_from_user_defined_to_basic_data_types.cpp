#include<iostream>
using namespace std;

class Celsius{
    private:
        float temper;
    public:
        Celsius(): temper(0){}
        operator float(){
            float fer;
            fer = ((temper*9)/5)+32;
            return fer;
        }
        void getTemper(){
            cout<< endl<< "Enter temperature in Celsius: ";
            cin>> temper;
        }
};

int main(){
    Celsius cel;                                                         //User-Defined data type
    float fer;                                                           //Basic data type
    cel.getTemper();
    fer = cel;                                                            //Conversion from Celsius data type to float
    cout<< "Temperature in Fahrenheit measurement: "<< fer; 
    return 0;
}