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
        friend  Counter operator ++(Counter &);                         //prefix
        friend  Counter operator ++(Counter &, int);                      //postfix
};

Counter operator ++(Counter &c){
            return Counter(c.count++);
}

Counter operator ++(Counter &c, int){
            return Counter(c.count++);
}

int main(){
    Counter c1, c2;
    cout<< endl<< "c1 = "<< c1.ret_count();
    cout<< endl<< "c2 = "<< c2.ret_count();
    ++c1;
    ++c2;
    c2++;
    cout<< endl<< "c1 = "<< c1.ret_count();
    cout<< endl<< "c2 = "<< c2.ret_count();
    return 0;
}