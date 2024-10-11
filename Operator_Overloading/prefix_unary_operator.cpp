#include<iostream>
using namespace std;

class Counter{
    private:
        unsigned int count;
    public:
        Counter(): count(0){}
        int ret_count(){
            return count;
        }
        void operator ++(){
            count++;
        }
};

int main(){
    Counter c1, c2;
    cout<< endl<< "c1 = "<< c1.ret_count();
    cout<< endl<< "c2 = "<< c2.ret_count();
    ++c1;
    ++c2;
    ++c2;
    cout<< endl<< "c1 = "<< c1.ret_count();
    cout<< endl<< "c2 = "<< c2.ret_count();
    return 0;
}