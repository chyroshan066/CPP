#include<iostream>
using namespace std;

class Employee{
    private:
        char name[25];
        int empID;
        float salary;
    public:
        void getData(){
            cout<< "Enter name: ";
            cin>> name;
            cout<< "Enter employee ID: ";
            cin>> empID;
            cout<< "Enter salary: ";
            cin>> salary;
        }
        void showData(){
            cout<< endl<< "Name: "<< name<< endl;
            cout<< "Employee ID: "<< empID<< endl;
            cout<< "Salary: "<< salary<< endl;
        }
};

class Manager: public Employee{
    private:
        char hiDegree[6];
    public:
        void getData(){
            Employee::getData();
            cout<< "Enter highest degree obtained: ";
            cin>> hiDegree;
        }
        void showData(){
            Employee::showData();
            cout<< "Highest Degree: "<< hiDegree<< endl;
        }
};

class Secretary: public Employee{
    private:
        float height;
    public:
        void getData(){
            Employee::getData();
            cout<< "Enter height: ";
            cin>> height;
        }
        void showData(){
            Employee::showData();
            cout<< "Height: "<< height<< endl;
        }
};

class Teacher: public Employee{
    private:
        int nPeriods;
    public:
        void getData(){
            Employee::getData();
            cout<< "Enter number of periods allocated: ";
            cin>> nPeriods;
        }
        void showData(){
            Employee::showData();
            cout<< "Number of periods allocated: "<< nPeriods<< endl;
        }
};

int main()
{
    Manager m;
    Secretary s;
    Teacher t;
    cout<< endl<< "Enter data on manager: "<< endl;
    m.getData();
    cout<< endl<< "Enter data on secretary: "<< endl;
    s.getData();
    cout<< endl<< "Enter data on teacher: "<< endl;
    t.getData();
    cout<< endl<< "Data on manager: ";
    m.showData();
    cout<< endl<< "Data on secretary: ";
    s.showData();
    cout<< endl<< "Data on teacher: ";
    t.showData();
    return 0;
}