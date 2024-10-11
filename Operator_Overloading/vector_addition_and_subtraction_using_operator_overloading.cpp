#include<iostream>
using namespace std;

class Vector{
    private:
        int xco, yco, zco;
    public:
        Vector(){}
        Vector(int x, int y, int z): xco(x), yco(y), zco(z){}
        Vector operator + (Vector o1){
            int x = xco + o1.xco;
            int y = yco + o1.yco;
            int z = zco + o1.zco;
            return Vector(x, y, z);
        }
        Vector operator - (Vector o1){
            int x = xco - o1.xco;
            int y = yco - o1.yco;
            int z = zco - o1.zco;
            return Vector(x, y, z);
        }
        void display(){
            cout<< "("<< xco<< ","<< yco<< ","<< zco<< ")";
        }
};

int main(){
    Vector v1(3,5,7), v2(2,4,8), v3, v4;

    v3 = v1+v2;
    v1.display();
    cout<< " + ";
    v2.display();
    cout<< " = ";
    v3.display();
    cout<< endl;

    v4 = v1-v2;
    v1.display();
    cout<< " - ";
    v2.display();
    cout<< " = ";
    v4.display();
    cout<< endl;

    return 0;
}