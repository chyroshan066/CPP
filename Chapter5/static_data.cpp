#include<iostream>
using namespace std;

class part{
    private:
        static int count;
        int pid;
    public:
        part(){
            count++;
            pid = count;
        }
        int getCount(){
            return count;
        }
        void show(){
            cout<< "parts id: "<< pid<< endl;
            cout<< "Total number of parts are: "<< count<< endl;
        }
};

int part::count = 0;

int main(){
    part p1, p2;
    cout<< "count is "<< p1.getCount()<< endl;
    p1.show();
    cout<< "count is "<< p2.getCount()<< endl;
    p2.show();
    part p3;
    cout<< "count is "<< p3.getCount()<< endl;
    p3.show();
    cout<< "count is "<< p1.getCount()<< endl;
    p1.show();
    return 0;
}