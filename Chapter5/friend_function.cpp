#include<iostream>
using namespace std;

class complex{
    private:
        float real, imag;
        friend complex add(complex, complex);          //Can be declared in private as well as public section
    public:
        void getValue(){
            cout<< endl<< "Enter real part: ";
            cin>> real;
            cout<< "Enter imaginary part: ";
            cin>> imag;
        }
        void showValue(){
            cout<< "("<< real<< ","<< imag<< ")";
        }
        // friend complex add(complex, complex);        //Can be declared in private as well as public section
};

complex add(complex cc1, complex cc2){
    complex temp;
    temp.real = cc1.real+cc2.real;
    temp.imag = cc1.imag+cc2.imag;
    return temp;
}

int main(){
    complex c1, c2, c3;
    c1.getValue();
    c2.getValue();
    c3  =  add(c1,c2);
    c1.showValue();
    cout<< " + ";
    c2.showValue();
    cout<< " = ";
    c3.showValue();
    return 0;
}