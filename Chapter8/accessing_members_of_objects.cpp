#include<iostream>
using namespace std;

class test{
    public:
        int data;
        test(){
            cout<< "Constructor test() is called"<< endl;
            data = 55;
        }
        ~test(){
            cout<< "Destructor ~test() is called"<< endl;
        }
        void show(){
            cout<< "data is "<< data<< endl;
        }
};

int main()
{
    test* ptr;
    test tobj;
    ptr = &tobj;
    cout<< "Accessing object through tobj.show().......";
    tobj.show();
    cout<< "Accessing object through ptr->show().......";
    ptr -> show();
    return 0;
}