#include<iostream>
using namespace std;

class B{
    public:
        virtual void fun(){}
};

class D: public B{};

int main()
{
    B* b = new D; 
    D* d = dynamic_cast<D*>(b);   //derived class pointer cannot point to base class but base class pointer can point to derived class.
    //* When base class pointer is pointed to base class object and undergo type conversion from base class to derived class pointer, it gives "Cannot cast B to D" output
    //* When base class pointer is pointed to derive class object and undergo type conversion from base class to derived class pointer, it gives "works" output
    if(d != NULL)
        cout<< "works";
    else    
        cout<< "Cannot cast B to D";
    return 0;
}