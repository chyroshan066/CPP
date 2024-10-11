#include<iostream>
using namespace std;

class Counter{
    private:
        unsigned int count;
    public:
        Counter(): count(0){}
        Counter(unsigned int n): count(n){}
        int ret_count(){
            return count;
        }
        Counter operator ++();                         //prefix
        Counter operator ++(int);                      //postfix
};

Counter Counter::operator ++(){
            return Counter(++count);
}

Counter Counter::operator ++(int){
            return Counter(count++);
}

int main(){
    Counter c1, c2, c3;
    cout<< endl<< "c1 = "<< c1.ret_count();
    cout<< endl<< "c2 = "<< c2.ret_count();
    c1++;
    ++c2;
    c3 = ++c2;
    cout<< endl<< "c1 = "<< c1.ret_count();
    cout<< endl<< "c2 = "<< c2.ret_count();
    cout<< endl<< "c3 = "<< c3.ret_count();
    return 0;
}