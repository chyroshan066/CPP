#include<iostream>
using namespace std;

class Student{
    private:
        char name[25];
        int studID;
    public:
        void getData(){
            cout<< "Enter name: ";
            cin>> name;
            cout<< "Enter student ID: ";
            cin>> studID;
        }
        void showData(){
            cout<< "Name: "<< name<< endl;
            cout<< "Student ID: "<< studID<< endl;
        }
};

class Employee{
    private:
        char org_name[25];
        int empID;
    public:
        void getData(){
            cout<< "Enter name of associated organization: ";
            cin>> org_name;
            cout<< "Enter employee ID: ";
            cin>> empID;
        }
        void showData(){
            cout<< "Name of associated organization: "<< org_name<< endl;
            cout<< "Employee ID: "<< empID<< endl;
        }
};

class marketing_officer: public Student, public Employee{
    private:
        int working_hour;
    public:
        void getData(){
            Student::getData();
            Employee::getData();
            cout<< "Enter working hours: ";
            cin>> working_hour;
        }
        void showData(){
            Student::showData();
            Employee::showData();
            cout<< "Working hour: "<< working_hour<< endl;
        }
};


int main()
{
    marketing_officer moff;
    cout<< "Enter data of marketing officer: "<< endl;
    moff.getData();
    cout<< endl<< "Data of marketing officer: "<< endl;
    moff.showData();
    return 0;
}