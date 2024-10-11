#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
        int employeeID;
        string name;
        float salary;
    public:
        void setData(){
            cin.ignore();                                   //Makes cin wait to accept input
            cout<< "Enter the name of the employee: ";
            getline(cin, name);                             //Accept spaces but doesnot waits
            cout<< "Enter employee ID of "<< name<< ": ";
            cin>> employeeID;
            cout<< "Enter the salary for "<< name<< ": ";
            cin>> salary;
        }
        void getData(){
            cout<< "Name: "<< name<< endl;
            cout<< "Employee ID: "<< employeeID<< endl;
            cout<< "Salary: "<< salary<< endl;
        }
};

int main(){
    int n;
    cout<< "Enter the number of employees: ";
    cin>> n;
    Employee e[n];
    for(int i=0; i<n; i++){
        cout<< endl<< "Enter data for employee"<< i+1<< endl;
        e[i].setData();
    }
    cout<< endl<< "Employee Records:"<< endl<< endl;
    for(int i=0; i<n; i++){
        e[i].getData();
        cout<< endl;
    }
    return 0;
}