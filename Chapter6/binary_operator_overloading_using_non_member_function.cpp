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
        friend Complex operator +(Complex, Complex);
};

Complex operator +(Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main(){
    Complex c1, c2, c3;
    c1 = Complex(4.4, 3.6);
    c2 = Complex(1.8, 1.06);
    c3 = c1 + c2;
    c1.display();
    cout<< " + ";
    c2.display();
    cout<< " = ";
    c3.display();
    return 0;
}