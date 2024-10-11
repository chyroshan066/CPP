#include<iostream>
using namespace std;

int count = 0;

class Test{
    public:
        Test(){
            count++;
            cout<< "\nControl is in constructor"<< count<< endl;
            // cout<< "Initialization operation done here"<< endl;
        }
        ~Test(){
            cout<< "\nControl is in destructor"<< count<< endl;
            // cout<< "Object goes out of scope"<< endl;
            // cout<< "Cleanup operation performed here";
            count--;
        }
};

int main(){
    cout<< "Entering main function"<< endl;
    Test t;
    {
        cout<< "Inside block"<< endl;
        Test t1, t2;
        cout<< "Exiting block"<< endl;
    }
    cout<< "Function main() terminating...";
    return 0;
}