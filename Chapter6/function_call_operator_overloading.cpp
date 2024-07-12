#include<iostream>
using namespace std;

class complex{
    private:
        float real, imag;
    public:
        complex(): real(0), imag(0){}
        complex operator () (float re, float im){
            real += re;
            imag += im;
            return *this;
        }
        complex operator () (float re){
            real += re;
            return *this;
        }
        void display(){
            cout<< "("<< real<< ","<< imag<< ")"<< endl;
        }
};

int main(){
    complex c1, c2;
    c2 = c1(3.2, 5.3);
    c1(6.5, 2.7);
    c2(1.9);
    cout<< "c1 = ";
    c1.display();
    cout<< "c2 = ";
    c2.display();
    return 0;
}