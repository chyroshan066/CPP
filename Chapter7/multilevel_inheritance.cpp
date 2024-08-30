#include<iostream>
using namespace std;

class Person{
    private:
        char name[25];
        char address[25];
    public:
        void getData(){
            cout<< "Enter name: ";
            cin>> name;
            cout<< "Enter address: ";
            cin>> address;
        }
        void showData(){
            cout<< "Name: "<< name<< endl;
            cout<< "Address: "<< address<< endl;
        }
};

class Employee: public Person{
    private:
        int empID;
        float salary;
    public:
        void getData(){
            Person::getData();
            cout<< "Enter employee ID: ";
            cin>> empID;
            cout<< "Enter salary: ";
            cin>> salary;
        }
        void showData(){
            Person::showData();
            cout<< "Employee ID: "<< empID<< endl;
            cout<< "Salary: "<< salary<< endl;
        }
};

class Manager: public Employee{
    private:
        char hiDegree;
    public:
        void getData(){
            Employee::getData();
            cout<< "Enter highest degree: ";
            cin>> hiDegree;
        }
        void showData(){
            Employee::showData();
            cout<< "Highest Degree: "<< hiDegree<< endl;;
        }
};

int main()
{
    Manager mgr;
    cout<< "Enter data on manager: "<< endl;
    mgr.getData();
    cout<< endl<< "Data on manager: "<< endl;
    mgr.showData();
    return 0;
}