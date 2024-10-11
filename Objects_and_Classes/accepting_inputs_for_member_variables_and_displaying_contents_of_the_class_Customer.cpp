#include<iostream>
#include<string>
using namespace std;

class Customer{
    private:
        string fName, lName, address;
        long phoneNo;
    public:
        void setData(){
            cout<< "Enter first name of the customer: ";
            cin>> fName;
            cout<< "Enter last name of the customer: ";
            cin>> lName;
            cin.ignore();
            cout<< "Enter the address of "<< fName<< " "<< lName<< ": ";
            getline(cin, address);
            cout<< "Enter phone number of "<< fName<< " "<< lName<< ": ";
            cin>> phoneNo;
        }
        void getData(){
            cout<< "First Name: "<< fName<< endl;
            cout<< "Last Name: "<< lName<< endl;
            cout<< "Address: "<< address<< endl;
            cout<< "Phone Number: "<< phoneNo<< endl;
        }
};

int main(){
    Customer c1;
    c1.setData();
    c1.getData();
    return 0;
}