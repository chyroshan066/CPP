#include<iostream>
#include<cmath>
#define PI 3.1413

using namespace std;

class Polar{
    private:
        float radius, angle;
    public:
        void setData(){
            cout<< "Enter radius in meter: ";
            cin>> radius;
            cout<< "Enter angle in degree: ";
            cin>> angle;
        }
        float ret_radius(){
            return radius;
        }
        float ret_angle(){
            return angle;
        }
        void display(){
            cout<< "("<< radius<< ","<< angle<< ")";
        }
};

class Rectangular{
    private:
        float xco, yco;
    public:
        Rectangular(){}
        Rectangular(Polar p){
            xco = p.ret_radius()*cos((p.ret_angle()*PI)/180);
            yco = p.ret_radius()*sin((p.ret_angle()*PI)/180);
        }
        void display(){
            cout<< "("<< xco<< ","<< yco<< ")";
        }
};

int main(){
    Polar p;
    Rectangular r;
    p.setData();
    r = p;
    cout<< "Polar coordinates ";
    p.display();
    cout<< " is equivalent to ";
    r.display(); 
    return 0;
}