#include<iostream>
using namespace std;

class Simple{
    private:
        int data1, data2;
    public:
        Simple(int a, int b=9){
            data1 = a;
            data2 = b;
        }
        void printData(){
            cout<< "The value of data1 and data2 is "<< data1<< " and "<< data2;
        }
};

int main(){ 
    Simple s(1);
    s.printData();
    return 0;
}