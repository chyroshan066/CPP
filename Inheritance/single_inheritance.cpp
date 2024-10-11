#include<iostream>
using namespace std;

class Student{
    private:
        char name[25];
        int studID;
    public:
        void getData(){
            cout<< endl<< "Enter name: ";
            cin>> name;
            cout<< "Enter Student ID: ";
            cin>> studID;
        }
        void showData(){
            cout<< "Name: "<< name<< endl;
            cout<< "Student ID: "<< studID<< endl;
        }
};

class Leader: public Student{
    private:
        char union_name[25];
    public:
        void getData(){
            Student::getData();
            cout<< "Enter name of the associated student union: ";
            cin>> union_name;
        }
        void showData(){
            Student::showData();
            cout<< "Name of the associated student union: "<< union_name<< endl;
        }
};

int main()
{
    Leader led;
    cout<< "Enter data on leader of student union:";
    led.getData();
    cout<< endl<< "Data on leader of student union: "<< endl;
    led.showData();
    return 0;
}