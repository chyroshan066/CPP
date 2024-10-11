#include<iostream>
using namespace std;

class A{
    private:
        int data;
    public:
        void getdata(){
            cout<< "Enter data: ";
            cin>> data;
        }
        void showdata(){
            cout<< "Data is "<< data<< endl;
        }
};

class B{
    private:
         A a;
         int b;
    public:
        void getdata(){
            a.getdata();
            cin>> b;
        }
        void showdata(){
            a.showdata();
            cout<< b;
        }
};

int main(){
    B beg;
    beg.getdata();
    beg.showdata();
    return 0;
}