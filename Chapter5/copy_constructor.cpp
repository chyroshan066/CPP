#include<iostream>
using namespace std;

class ValueShow{
    private:
        int value;
    public:
        ValueShow();
        ValueShow(int a){
            value = a;
        }
        ValueShow(ValueShow &x){   //Copy constructor
            value = x.value;
        }
        //When no copy constructor is found, then compiler provides its own copy constructor
        int display(){
            return value;
        }
};

int main(){
    ValueShow p1(55), p4; 
    ValueShow p2(p1);   //Valid even though there is not any user defined copy constructor
    ValueShow p3=p1;    //Invalid when there is no user defined copy constructor 
    // p4 = p1; //In this case, copy constructor is not called
    //Copy constructor is invoked at the time of initialization only.
    cout<< "Value of data on object p1 = "<< p1.display()<< endl;
    cout<< "Value of data on object p2 = "<< p2.display()<< endl;
    cout<< "Value of data on object p3 = "<< p3.display()<< endl;
    return 0;
}