#include<iostream>
#include<cmath>

using namespace std;

class Cartesian;

//Source class
class Polar{
    private:
        float radius, angle;
    public:
        Polar(): radius(0), angle(0){}
        Polar(float rad, float ang): radius(rad), angle(ang){}
        operator Cartesian();
        void display(){
            cout<< "("<< radius<< ","<< angle<< ")"<< endl;
        }
        friend class Cartesian;
};

//Destination class
class Cartesian{
    private:
        float xco, yco;
    public:
        Cartesian(): xco(0), yco(0){}
        Cartesian(float x, float y): xco(x), yco(y){}
        void display(){
            cout<< "("<< xco<< ","<< yco<< ")"<< endl;
        }
};

//In case of cast operator, it is necessary to define it outside the class for no error
Polar::operator Cartesian(){
float x = static_cast<int>(radius*cos(angle));
float y = static_cast<int>(radius*sin(angle));
return Cartesian(x, y);
}

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