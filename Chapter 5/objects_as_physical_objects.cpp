#include<iostream>
#include<cstring>
using namespace std;

class product{
    private:
        int productid;
        char name[15];
        float cost;
    public:
        void setdata(int pid, char pname[], float cst){
            productid = pid;
            strcpy(name, pname);
            cost = cst;
        }
        void showdata(){
            cout<< "Product ID: "<< productid<< endl;
            cout<< "Name: "<< name<< endl;
            cout<< "Cost: "<< cost<< endl;
        }
};

int main(){
    product p1, p2;
    p1.setdata(944, "CD-ROM", 1500.00);
    p2.setdata(945, "Pen Drive", 1000.00);
    p1.showdata();
    p2.showdata();
    return 0;
}