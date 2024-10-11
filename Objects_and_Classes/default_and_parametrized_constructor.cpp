#include<iostream>
using namespace std;

class Complex{
    private:
        int a, b;
    public:
        Complex();                                                 //Default constructor as it takes no parameters
        Complex(int, int);                                         //Parametrized constructor as it takes two parameters
        void printNumber(){
            cout<< "Your number is "<< a<< " + "<< b<< "i"<< endl;
        }
};

int main(){
    Complex a(4, 6);            //Implicit call
    Complex b = Complex(5, 7);  //Explicit call
    a.printNumber();
    b.printNumber();
    return 0;
}

Complex::Complex(){
    a = 0;
    b = 0;
}

Complex::Complex(int x, int y){
    a = x;
    b = y;
}