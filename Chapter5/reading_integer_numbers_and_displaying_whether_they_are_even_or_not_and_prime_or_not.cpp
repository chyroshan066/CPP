#include<iostream>
using namespace std;

class Check{
    private:
        int num;
    public:
        Check(){}
        Check(int n): num(n){}
        bool isEven(){
            return (num%2 == 0);
        }
        bool isPrime(){
            for(int i=2; i<(num/2); i++){
                if(num%i == 0)
                    return false;
                else
                    return true;
            }
        }
};

int main(){
    Check c;
    int n;
    cout<< "Enter any number: ";
    cin>> n;
    c = Check(n);
    {
        if(c.isEven() == true)
        cout<< n<< " is even number. "<< endl;
        else
        cout<< n<< " is odd number. "<< endl;
        }
    {
        if(c.isPrime() == true)
        cout<< n<< " is prime number. "<< endl;
        else
        cout<< n<< " is composite number. "<< endl;
        }
    return 0;
}