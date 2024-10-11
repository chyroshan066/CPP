#include<iostream>
using namespace std;

class pointerasmem {
    private:
        int *ptr;
    public:
        void setpointer(int *var){
            ptr = var;
        }
        void display(){
            cout<< *ptr;
        }
};

int main(){
    int num = 5;
    int *nump;
    *nump = num;
    pointerasmem p;
    p.setpointer(nump);
    p.display();
    return 0;
}