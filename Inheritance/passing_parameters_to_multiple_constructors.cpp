#include<iostream>
using namespace std;

class base_one{
    public:
        base_one(){
            cout<< "Default constructor from base_one class"<< endl;
        }
        base_one(int x){
            cout<< "Parametrized constructor from base_one class"<< endl;
        }
};

class base_two{
    public:
        base_two(){
            cout<< "Default constructor from base_two class"<< endl;
        }
        base_two(int x){
            cout<< "Parametrized constructor from base_two class"<< endl;
        }
};

class derived: public base_one, public base_two{
    public:
        derived(){
            cout<< "Default constructor from derived class"<< endl;
        }
        derived(int x, int y, int z): base_one(x), base_two(y){
            cout<< "Parametrized constructor from derived class"<< endl;
        }
};

int main()
{
    derived d1;
    derived d(1,2,3);
    return 0;
}