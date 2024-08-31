#include<iostream>
using namespace std;

class Animal{
    public:
        void display(){
            cout<< "From base class Animal"<< endl;
        }
};

class Cow: public Animal{
    public:
        void display(){
            cout<< "From derived class Cow"<< endl;
        }
};

class Dog: public Animal{
    public:
        void display(){
            cout<< "From derived class Dog"<< endl;
        }
};

int main()
{
    Animal* panm;
    Animal anm;
    Cow cw;
    Dog dg;

    panm = &anm;
    panm -> display();

    panm = &cw;
    panm -> display();

    panm = &dg;
    panm -> display();

    return 0;
}