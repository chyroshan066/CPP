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
        void show(){
            cout<< "From derived class Dog using show function"<< endl;
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
    panm -> show();

    return 0;
}