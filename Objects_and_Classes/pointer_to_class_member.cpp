#include<iostream>
using namespace std;

class test{
    public:
        int data;
        void showData(){
            cout<< data<< endl;
        }
};

int main(){
    int test::*datap;
    datap = &test::data;
    void(test::*funcp)();
    funcp = &test::showData;
    test tst;
    test *tstp;
    tstp = &tst;
    tst.data = 5;
    cout<< tst.*datap<< endl;
    (tst.*funcp)();
    cout<< tstp->*datap<< endl;
    (tstp->*funcp)();
    return 0;
}