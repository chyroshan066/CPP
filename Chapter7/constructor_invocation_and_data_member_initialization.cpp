#include<iostream>
using namespace std;

class base{
    protected:
        int num1, num2;
    public:
        base(int n1, int n2): num1(n1), num2(n2){}
};

class derived: public base{
    private:
        int val1, val2;
    public:
        derived(int v1, int v2, int v3): val1(v1), val2(v3), base(v1, v2){}
        void display(){
            cout<< "num1 = "<< num1<< endl;
            cout<< "num2 = "<< num2<< endl;
            cout<< "val1 = "<< val1<< endl;
            cout<< "val2 = "<< val2<< endl;
        }
};

int main()
{
    derived d(5, 7, 12);
    d.display();
    return 0;
}