#include<iostream>
using namespace std;

class Complex{
    private:
        float real, imag;
    public:
        Complex(){}
        Complex(float rl, float im): real{rl}, imag{im}{}
        void display(){
            cout<< "("<< real<< ","<< imag<< ")";
        }
        friend Complex operator -(Complex c);
};

Complex operator -(Complex c){
    float re = -c.real;
    float im = -c.imag;
    return Complex(re, im);
}

int main(){
    Complex c;
    c = Complex(4.4, 3.6);
    c = -c;
    c.display();
    return 0;
}