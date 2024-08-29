#include<iostream>
using namespace std;

class base{
    public:
        void display(char c){
            cout<< "display() in base with char argument."<< endl;
        }
        void display(int i){
            cout<< "display() in base with int argument."<< endl;
        }
};

class derived: public base{
    public:
        using base::display; //makes accessible component more convenient. "using" declararation here allows to access the overloaded member function of the base class with overrided function of derived class without using base class_name and scope resolution operator
        void display(){
                cout<< "display() in derived without argument."<< endl;
            }
};

int main()
{
    derived d1;
    d1.display();  //accessible
    d1.display('a');  //inaccessible as "display(char c)"  function is hidden without using "using" declaration
    d1.display(5);  //inaccessible as "display(int i)"  function is hidden without using "using" declaration
    // d1.base::display(5);  //accessible
    // d1.base::display('c');  //accessible
    return 0;
}