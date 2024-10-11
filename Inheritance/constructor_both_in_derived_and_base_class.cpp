#include<iostream>
using namespace std;

class base{
    public:
        base(){
            cout<< "Default constructor from base class."<< endl;
        }
};

class derived: public base{
    public:
        derived(){
            cout<< "Default constructor from derived class."<< endl;
        }
};

int main()
{
    derived d;
    return 0;
}