#include<iostream>
using namespace std;

class ValueShow{
    private:
        int value;
    public:
        ValueShow();
        ValueShow(int a){
            value = a;
        }
        ValueShow(ValueShow &x){
            value = x.value;
        }
        int display(){
            return value;
        }
};

int main(){
    ValueShow p1(55); 
    ValueShow p2(p1);
    ValueShow p3=p1;   
    cout<< "Value of data on object p1 = "<< p1.display()<< endl;
    cout<< "Value of data on object p2 = "<< p2.display()<< endl;
    cout<< "Value of data on object p3 = "<< p3.display()<< endl;
    return 0;
}