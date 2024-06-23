#include<iostream>
using namespace std;

class Test{
    public:
        Test(){
            cout<< "\nControl is in constructor"<< endl;
            cout<< "Initialization operation done here"<< endl;
        }
        ~Test(){
            cout<< "\nControl is in destructor"<< endl;
            cout<< "Object goes out of scope"<< endl;
            cout<< "Cleanup operation performed here";
        }
};

int main(){
    Test t;
    cout<< "Function main() terminating...";
    return 0;
}