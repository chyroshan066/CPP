#include<iostream>
using namespace std;

class base{
    protected:
        int num;
    public:
        void readData(){
            cout<< "Enter number in base: ";
            cin>> num;
        }
        void showData(){
            cout<< "Number in base class = "<< num<< endl;
        }
};

class derived{
    private:
        int num;
    public:
        void readData(){
            cout<< "Enter number in derived: ";
            cin>> num;
        }
        void showData(){
            cout<< "Number in derived class = "<< num<< endl;
        }
};

int main()
{
    derived d1;
    d1.readData();
    d1.showData();
    return 0;
}