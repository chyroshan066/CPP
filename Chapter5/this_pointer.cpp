#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        // A & setData(int a){    //both works the same
        // A & setData(int a){
        void setData(int a){
            this->a = a;  //this keyword is a pointer which points local object member
            // return *this;
        }

        void getData(){
            cout<< "The value of a is "<< a<< endl;
        }
};

int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}