#include<iostream>
using namespace std;

class base{
    public:
        base(int data){
            cout<< "Parametrized constructor from base class"<< endl;
        }
};

class derived: public base{
    public:
        // derived(int data)  //Generates error because there is no default constructor in base class and for the case of parametrized constructor,it must be called explicitly
        // {
        //     cout<< "Parametrized constructor from derived class"<< endl;
        // }

        derived(int data): base(data)  //Parametrized constructor must be called through member initializer list
        {
            cout<< "Parametrized constructor from derived class"<< endl;
        }
};

int main()
{
    derived d(5);
    return 0;
}