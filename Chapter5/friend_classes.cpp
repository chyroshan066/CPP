#include<iostream>
using namespace std;

class B;

class A{
    private:
        char passA[20];
    public:
        void getData(){
            cout<< endl<< "Enter password of A: ";
            cin>> passA;
        }
        void showData(B);
        friend class B;                       //All functions of class A can access private data members of class B
};

class B{
    private:
        char passB[20];
    public:
        void getData(){
            cout<< endl<< "Enter password of B: ";
            cin>> passB;
        }
        void showData(A a){
            cout<< endl<< "A's password is: "<< a.passA;
        }
        friend class A;                      //All functions of class B can access private data members of class A
};

void A::showData(B b){
            cout<< endl<< "B's password is: "<< b.passB;
        }

int main(){
    A a;
    B b;
    a.getData();
    b.getData();
    a.showData(b);
    b.showData(a);
    return 0;
}
