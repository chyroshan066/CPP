#include<iostream>
using namespace std;

class employee{
    private:
        char name[25];
        float salary;
    public:
        void getdata(){
            cout<< "\nEnter name: ";
            cin>> name;
            cout<< "\nEnter salary: ";
            cin>> salary;
        }
        void showdata(){
            cout<< "\nName: "<< name<< endl;
            cout<< "Salary: "<< salary;
        }
};

int main(){
    employee *eptr;
    employee e;
    eptr = &e;
    eptr ->getdata();                                       //Accessing using arrow operator
    // (*eptr).getdata();                                   //Accessing through dereferencing
    cout<< "\nAccessing data through pointer variable: ";
    eptr ->showdata();                                      //Accessing using arrow operator
    // (*eptr).showdata();                                  //Accessing through dereferencing
    return 0;
}