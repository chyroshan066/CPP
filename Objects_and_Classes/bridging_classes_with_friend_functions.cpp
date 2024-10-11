#include<iostream>
using namespace std;

class second;  //declared so that the object second passed as argument in friend function inside class first knows that there exists another class second and doesn't throw error
class first{
    private:
        int data1;
    public:
        first(int x){
            data1 = x;
        }
        friend int sum(first a, second b);     //is not a member of class but has access to private data members
};

class second{
    private:
        int data2;
    public:
        second(int x){
            data2 = x;
        }
        friend int sum(first a, second b);     //is not a member of class but has access to private data members
};

int sum(first a, second b){
    return (a.data1 + b.data2);
}

int main(){
    first a(15);
    second b(10);
    cout<< "Sum of first and second is: "<< sum(a,b);
    return 0;
}
