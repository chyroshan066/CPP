#include<iostream>
using namespace std;

class Test{
    private:
        int data;
    public:
        Test(){
            data = 0;
        }
        void getdata(){
            cout<< "Enter data: ";
            cin>> data;
        }
        void showdata(){
            cout<< "Data is: "<< data<< endl;
        }
};

int main(){
    Test t1[10];
    int i, n;
    cout<< "How many data?";
    cin>> n;
    for(i=0; i<n; i++){
        cout<< "Enter Data: "<< i+1<< endl;
        t1[i].getdata();
    }
    for(i=0; i<n; i++){
        cout<< "\n***Data: "<< i+1<< "***"<< endl;
        t1[i].showdata();
    }
    return 0;
}