#include<iostream>
using namespace std;

class complex{
    private:
        float real, imag;
    public:
        complex(){
            real = 0;
            imag = 0;
        }
        complex(float re, float im){
            real = re;
            imag = im;
        }
        void getvalue(){
            cout<< "\nEnter real part: ";
            cin>> real;
            cout<< "\nEnter imaginary part: ";
            cin>> imag;
        }
        void showvalue(){
            cout<< "("<< real<< ","<< imag<< ")";
        }
        complex add(complex cc2){
            complex result;
            result.real = real+ cc2.real;
            result.imag = imag+ cc2.imag;
            return result;
        }
};

int main(){
    complex c1, c2(4.2,  5.3), c3;
    c1.getvalue();
    c3 = c1.add(c2);
    c1.showvalue();
    cout<< "+";
    c2.showvalue();
    cout<< "=";
    c3.showvalue();
    return 0;
}