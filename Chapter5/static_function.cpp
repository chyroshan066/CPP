#include<iostream>
using namespace std;

class element{
    private:
        static int count;
        int data;
    public:
        element(){
            count++;
            data  = count;
        }
        ~element(){
            count--;
            cout<< "Destroying element with value "<< data<< endl;
        }
        static void showCount(){
            cout<< "Number of elements are: "<< count<< endl;
        }
        void showData(){
            cout<< "The data is: "<< data<< endl;
        }
};

int element::count = 0;

int main(){
    element s1;
    element::showCount();
    element s2, s3;
    element::showCount();
    s1.showData();
    s2.showData();
    s3.showData();
    return 0;
}