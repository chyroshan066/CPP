#include<iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle(){
            cout<< "Constructor of Vehicle invoked"<< endl;
        }
        virtual void showData(){
            cout<< "I am Vehicle"<< endl;
        }
        virtual ~Vehicle(){
            cout<< "Destructor of Vehicle invoked"<< endl;
        }
};

class Car: public Vehicle{
    public:
        Car(){
            cout<< "Constructor of Car invoked"<< endl;
        }
        void showData(){
            cout<< "I am Car"<< endl;
        }
        ~Car(){
            cout<< "Destructor of Car invoked"<< endl;
        }
};

int main()
{
    Vehicle *vp;

    cout<< "Base class pointer pointing to base class object"<< endl;
    vp = new Vehicle;
    vp -> showData();
    delete vp;

    cout<< "Base class pointer pointing to derived class object"<< endl;
    vp = new Car;
    vp -> showData();
    delete vp;

    return 0;
}