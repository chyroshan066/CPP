#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        int roll;
        float marks;
    public:
        void setData(){
            cin.ignore();
            cout<< "Enter the name of the student: ";
            getline(cin, name);
            cout<< "Enter the roll number of "<< name<< ": ";
            cin>> roll;
            cout<< "Enter the marks of "<< name<< ": ";
            cin>> marks;
        }
        void getData(){
            cout<< "Name: "<< name<< endl;
            cout<< "Roll: "<< roll<< endl;
            cout<< "Marks: "<< marks<< endl;
        }
};

int main(){
    Student s1;
    s1.setData();
    s1.getData();
    return 0;
}