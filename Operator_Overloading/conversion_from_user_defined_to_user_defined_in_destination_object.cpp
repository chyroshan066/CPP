#include<iostream>
#include<cmath>

using namespace std;

//Source class
class Polar{
    private:
        float radius, angle;
    public:
        Polar(): radius(0), angle(0){}
        Polar(float rad, float ang): radius(rad), angle(ang){}
        float return_rad(){
            return radius;
        }
        float return_ang(){
            return angle;
        }
        void display(){
            cout<< "("<< radius<< ","<< angle<< ")"<< endl;
        }
};


//Destination class
class Cartesian{
    private:
        float xco, yco;
    public:
        Cartesian(): xco(0), yco(0){}
        Cartesian(float x, float y): xco(x), yco(y){}
        Cartesian(Polar p){
            xco = p.return_rad()*cos(p.return_ang());
            yco = p.return_rad()*sin(p.return_ang());
        }
        void display(){
            cout<< "("<< xco<< ","<< yco<< ")"<< endl;
        }
};

int main(){
    Polar pol(10.0, 0.7853);
    Cartesian cart;
    cart = pol;
    cout<< "Given polar: ";
    pol.display();
    cout<< "Equivalent cartesian: ";
    cart.display();
    return 0;
}