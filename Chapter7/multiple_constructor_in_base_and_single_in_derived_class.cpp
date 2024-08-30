#include<iostream>
using namespace std;

class base{
    public:
        base(){
            cout<< "Default constructor from base class"<< endl;
        }
        base(int data){
            cout<< "Parametrized constructor from base class"<< endl;
        }
};

class derived: public base{
    public:
        derived(int data){
            cout<< "Parametrized constructor from derived class"<< endl;
        }
};

int main()
{
    derived d(5);
    return 0;
}