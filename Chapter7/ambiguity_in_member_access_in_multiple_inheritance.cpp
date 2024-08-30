#include<iostream>
using namespace std;

class BaseOne{
    public:
        void display(){
            cout<< "I am from BaseOne"<< endl;
        }
};

class BaseTwo{
    public:
        void display(){
            cout<< "I am from BaseTwo"<< endl;
        }
};

class Derived: public BaseOne, public BaseTwo{
    public:
        void drvdisplay(){
            // display();  //error: ambiguous
            BaseOne::display();  //valid
            BaseTwo::display();  //valid
        }
};

int main()
{
    Derived Der;
    // Der.display();  //error: ambiguous
    Der.BaseOne::display();  //valid
    Der.BaseTwo::display();  //valid
    return 0;
}