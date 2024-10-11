#include<iostream>
using namespace std;

class Test{
    private:
        static int snum;
        int num;
    public:
        void setData(int n1, int n2){
            snum = n1;
            num = n2;
        }
        void showData(){
            cout<< "Static data="<< snum<< "    Non-static data="<< num<< endl;
        }
};

int Test::snum;

int main(){
    Test t1, t2;
    t1.setData(5, 6);
    t2.setData(8, 9);
    t1.showData();
    t2.showData();
    t1.setData(12, 13);
    t1.showData();
    t2.showData();
    return 0;
}