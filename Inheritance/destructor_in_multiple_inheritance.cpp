#include<iostream>
using namespace std;

class base_one{
    public:
        base_one(){
            cout<< "base_one class constructor"<< endl;
        }
        ~base_one(){
            cout<< "base_one class destructor"<< endl;
        }
};

class base_two{
    public:
        base_two(){
            cout<< "base_two class constructor"<< endl;
        }
        ~base_two(){
            cout<< "base_two class destructor"<< endl;
        }
};

class derived: public base_two, public base_one{
    public:
        derived(){
            cout<< "Derived class constructor"<< endl;
        }
        ~derived(){
            cout<< "Derived class destructor"<< endl;
        }
};

int main()
{
    derived d;
    return 0;
}