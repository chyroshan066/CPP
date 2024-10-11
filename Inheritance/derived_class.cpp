#include<iostream>
using namespace std;

class A{
    private:
        int pvtdataA;
    protected:
        int protdataA;
    public:
        int pubdataA;
};

class B: public A{
    public:
        void func(){
            int a;
            // a = pvtdataA;  //Error: not accessible
            a = protdataA;
            a = pubdataA;
        }
};

class C: protected A{
    public:
        void func(){
            int a;
            // a = pvtdataA;  //Error: not accessible
            a = protdataA;
            a = pubdataA;
        }
};

class D: private A{
    public:
        void func(){
            int a;
            // a = pvtdataA;  //Error: not accessible
            a = protdataA;
            a = pubdataA;
        }
};

int main()
{
    int num;
    
    B objB;
    // num = objB.pvtdataA;  //Error: not accessible
    // num = objB.protdataA; //Error: not accessible
    num = objB.pubdataA;

    C objC;
    // num = objC.pvtdataA;  //Error: not accessible
    // num = objC.protdataA; //Error: not accessible
    // num = objC.pubdataA;  //Error: not accessible

    D objD;
    // num = objD.pvtdataA;  //Error: not accessible
    // num = objD.protdataA; //Error: not accessible
    // num = objD.pubdataA;  //Error: not accessible

    return 0;
}