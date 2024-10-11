#include<iostream>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        void setData(){
            cout<< "Enter real and imaginary part for the complex number: ";
            cin>> real>> imag;
        }
        void getData(){
            cout<< "("<< real<< ","<< imag<< ")";
        }
        Complex & sum(Complex o1){
            real += o1.real;
            imag += o1.imag;
            return *this;
        }
};

int main(){
    Complex c1, c2, c3;
    c1.setData();
    c2.setData();
    c1.getData();
    cout<< " + ";
    c2.getData();
    cout<< " = ";
    c3 = c1.sum(c2);
    c3.getData();
    return 0;
}