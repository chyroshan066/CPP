#include<iostream>
using namespace std;

class BankDeposit{
    private:
        int principal;
        int years;
        float interestRate;
        float returnValue;
    public:
        BankDeposit(){}
        BankDeposit(int p, int t, float r);
        BankDeposit(int p, int t, int r);
        void Show();
};

BankDeposit::BankDeposit(int p, int t, float r){
    principal = p;
    years = t;
    interestRate = r;
    returnValue = principal;
    for(int i=0; i<years; i++){
        returnValue *= (1+interestRate);
    }
}

BankDeposit::BankDeposit(int p, int t, int r){
    principal = p;
    years = t;
    interestRate = static_cast<float>(r)/100;
    returnValue = principal;
    for(int i=0; i<years; i++){
        returnValue *= (1+interestRate);
    }
}

void BankDeposit::Show(){
    cout<< "Principal amount was "<< principal<< ". Return value after "<< years;
    (years>1)?cout<< " years is "<< returnValue<< endl : cout<< " year is "<< returnValue<< endl;
}

int main(){
    BankDeposit bd1, bd2, bd3;
    int p, t, R;
    float r;

    cout<< "Enter the value of p, t and r: "<< endl;
    cin>> p>> t>> r;
    bd1 = BankDeposit(p, t, r);
    bd1.Show();

    cout<< "Enter the value of p, t and R: "<< endl;
    cin>> p>> t>> R;
    bd2 = BankDeposit(p, t, R);
    bd2.Show();
    return 0;
}