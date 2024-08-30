#include<iostream>
using namespace std;

class complex{
    protected:
        float real, imag;
    public:
        complex(): real(0), imag(0){}
        complex(float re): real(re), imag(0){}
        complex(float re, float im): real(re), imag(im){}

        complex operator +(const complex& cc) const{
            float rr = real + cc.real;
            float ri = imag + cc.imag;
            return complex(rr, ri);
        }

        void showData(){
            cout<< "("<< real<< ","<< imag<< ")";
        }
};

class dcomplex: public complex{
    protected:
        float real, imag;
    public:
        dcomplex(){}
        dcomplex(float re): complex(re){}
        dcomplex(float re, float im): complex(re, im){}
        dcomplex(complex cc): complex(cc){}   //For conversion from complex to dcomplex

        dcomplex operator -(const dcomplex& dd) const{
            float rr = real - dd.real;
            float ri = imag - dd.imag;
            return dcomplex(rr, ri);
        }
};

int main()
{
    dcomplex c1(5.6, 7.9), c2(3.2, 4.5), c3, c4;
    c3 = c1 + c2;
    c4 = c1 - c2;
    cout<< "c1 = ";
    c1.showData();
    cout<< endl<< "c2 = ";
    c2.showData();
    cout<< endl<< "c3 = ";
    c3.showData();
    cout<< endl<< "c4 = ";
    c4.showData();
    return 0;
}