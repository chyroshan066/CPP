#include<iostream>
using namespace std;

class Complex{
    private:
        float real, imag;
    public:
        Complex(float re=0, float im=0): real(re), imag(im){}
        bool operator >(Complex cc){
            float mag1, mag2;
            mag1 = real*real + imag*imag;
            mag2 = cc.real*cc.real + cc.imag*cc.imag;
            if(mag1 > mag2)
                return true;
            else    
                return false;
        }
        void display(){
            cout<< "("<< real<< ","<< imag<< ")"<< endl;
        }
};

template <class T>
T find_max(T a, T b){
    if(a > b)
        return a;
    else    
        return b;
}

int main()
{
    int n1=7, n2=9;
    cout<< find_max(n1, n2)<< endl;
    Complex c1(2.9, 7.3), c2(8.5, 5.7);
    Complex c3 = find_max(c1, c2);
    c3.display();
    return 0;
}