#include<iostream>
using namespace std;

class Test
{
    private:
        int a;
        int b;
    public:
        Test(int i, int j): a(i), b(j)
        // Test(int i, int j): a(i), b(i+j)    //Valid
        // Test(int i, int j): a(i), b(a+j)    //Valid since, the value of a is made available by initialising it before b
        // Test(int i, int j):  b(j), a(b+i)      //Gives garbage value since, a is declared before that of b and hence, it must be initialized before b   
        {
            cout<< "Constructor executed"<< endl;
            cout<< "Value of a is "<< a<< endl;
            cout<< "Value of b is "<< b<< endl;
        }
};

int main(){
    Test t(9,6);
    return 0;
}