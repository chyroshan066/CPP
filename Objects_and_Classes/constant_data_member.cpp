#include<iostream>
using namespace std;

class constc1{
    private:
        const int constData;
    public:
        constc1(): constData(0){}
        constc1(int num): constData(num){}
        void display();
        int retval();
};

void constc1::display(){
    cout<< constData<< endl;
}

int constc1::retval(){
    return constData;
}

int main(){
    constc1 o1(3), o2;
    cout<< "Value of o1 is ";
    o1.display();
    cout<< "Value of o2 is "<< o2.retval();
    return 0;
}