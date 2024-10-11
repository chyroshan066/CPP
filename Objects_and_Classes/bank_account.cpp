#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
        string depositorName;
        long accNo;
        string accountType;
    public:
        void setData(){
            cout<< "Enter the name of the depositor: ";
            getline(cin, depositorName);
            cout<< "Enter account number of "<< depositorName<< ": ";
            cin>> accNo;
            cout<< "What is the acccount type: ";
            cin>> accountType;
        }
        void getData(){
            cout<< "Name: "<< depositorName<< endl;
            cout<< "Account Type: "<< accountType<< endl;
        }
};

int main(){
    BankAccount b1;
    b1.setData();
    b1.getData();
    return 0;
}