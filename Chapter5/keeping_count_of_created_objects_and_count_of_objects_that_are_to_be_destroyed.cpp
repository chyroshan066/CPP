#include<iostream>
using namespace std;

class Counter{
    private:
        static int objCreated, objLeft;
    public:
        Counter(){
            objLeft++;
            objCreated++;
            cout<< objCreated<< " object created"<< endl;
        }
        ~Counter(){
            objLeft--;
            cout<< objLeft<< " object left to be destroyed"<< endl;
        }
};

int Counter::objCreated;
int Counter::objLeft;

int main(){
    Counter c1, c2;
    Counter c3;
    {
        Counter c4, c5;
    }
    Counter c6;
    return 0;
}