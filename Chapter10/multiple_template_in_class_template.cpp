#include<iostream>
using namespace std;

template <class T1, class T2>
class test{
    private:
        T1 a;
        T2 b;
    public:
        test(){}
        test(T1 n1, T2 n2): a(n1), b(n2){}
        void display(){
            cout<< "Data: "<< a<< " and "<< b<< endl;
        }
};

int main()
{
    test <int, float> myobj(5, 7.39);
    myobj.display();
    return 0;
}