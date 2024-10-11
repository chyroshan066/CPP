#include<iostream>
using namespace std;

class Base{
    private:
        int b_var;
    public:
        Base(){}
        explicit Base(int var): b_var(var){}
        void print(){
            cout<< b_var<< endl;
        }
};

void fun(Base b){
    b.print();
}

int main(){
    Base obj1(10);   //Normal call to constructor
    // Base obj2 = 20;  //When explicit keyword is declared in front of the constructor then Implicit call to the constructor is not allowed
    fun(obj1);       //Normal call to constructor
    // fun(30);         //When explicit keyword is declared in front of the constructor then Implicit call to the constructor is not allowed
    return 0;
}