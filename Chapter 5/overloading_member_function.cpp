#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

class OverMemFun{
    private:
        char ch;
        int n;
    public:
        void init(char, int);
        void display();
        void display(int);
        void display(char);
        void display(char, int);
};

void OverMemFun::init(char chr, int num){
    ch = chr;
    n = num;
}

void OverMemFun::display(){
    for (int i=0; i<n; i++){
        cout<< setw(4)<< ch;
    }
    cout<< endl;
}

void OverMemFun::display(int num){
    for (int i=0; i<num; i++){
        cout<< setw(4)<< ch;
    }
    cout<< endl;
}

void OverMemFun::display(char chr){
    for (int i=0; i<n; i++){
        cout<< setw(4)<< chr;
    }
    cout<< endl;
}

void OverMemFun::display(char chr, int num){
    for (int i=0; i<num; i++){
        cout<< setw(4)<< chr;
    }
    cout<< endl;
}

int main(){
    OverMemFun omf;
    omf.init('#', 5);
    omf.display();
    omf.display(8);
    omf.display('*');
    omf.display('*', 8);
    return 0;
}