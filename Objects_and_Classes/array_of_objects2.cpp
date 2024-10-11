#include<iostream>
using namespace std;

class Test{
    private:
        int data;
    public:
        Test(): data(0){}
        Test(int n): data(n){}
        void getdata(){
            cout<< "Enter data: ";
            cin>> data;
        }
        void showdata(){
            cout<< "\t"<< data;
        }
};

int main(){
    Test t1[3] = {9,8,7};
    cout<< "\nThe initialized data are: ";
    for(int i=0; i<3; i++)
        t1[i].showdata();
    return 0;
}