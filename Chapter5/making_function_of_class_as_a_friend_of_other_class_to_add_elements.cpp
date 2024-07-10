#include<iostream>
using namespace std;

class B;

class A{
    private:
        int data1;
    public:
        void setData(){
            cout<< "Enter the number for class A: ";
            cin>> data1;
        }
        friend int add(A, B);
        friend int diff(A, B);
        friend int prod(A, B);
};

class B{
    private:
        int data2;
    public:
        void setData(){
            cout<< "Enter the number for class A: ";
            cin>> data2;
        }
        friend int add(A, B);
        friend int diff(A, B);
        friend int prod(A, B);
};

int add(A a, B b){
    return (a.data1 + b.data2);
}

int diff(A a, B b){
    return (a.data1 - b.data2);
}

int prod(A a, B b){
    return (a.data1 * b.data2);
}

int main(){
    A a;
    B b;
    a.setData();
    b.setData();
    cout<< "After adding, the value is "<< add(a, b)<< endl;
    cout<< "After subtracting, the value is "<< diff(a, b)<< endl;
    cout<< "After multiplying, the value is "<< prod(a, b)<< endl;
    return 0;
}