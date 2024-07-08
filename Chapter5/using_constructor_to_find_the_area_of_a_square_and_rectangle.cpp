#include<iostream>
#include<cmath>
using namespace std;

class Area{
    private:
        int length, breath, area;
    public:
        Area(){}
        Area(int l){
            area = pow(l,2);
        }
        Area(int l, int b){
            area = l*b;
        }
        void squareDisplay(){
            cout<< "The area of a square is "<< area<< endl;
        }
        void rectangleDisplay(){
            cout<< "The area of a rectangle is "<< area<< endl;
        }
};

int main(){
    Area a1, a2;
    int l, b;

    cout<< "Enter the length of the square: ";
    cin>> l;
    a1 = Area(l);
    a1.squareDisplay();

    cout<< "Enter the length and breadth of the rectangle: ";
    cin>> l>> b;
    a2 = Area(l,b);
    a2.rectangleDisplay();

    return 0;
}