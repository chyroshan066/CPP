#include<iostream>
using namespace std;

class Point{
    public:
        virtual void draw(){
            cout<< "Point"<< endl;
        }
};

class Line: public Point{
    public:
        void draw(){
            cout<< "Line"<< endl;
        }
};

class Triangle: public Point{
    public:
        void draw(){
            cout<< "Triangle"<< endl;
        }
};

class Polygon: public Point{
    public:
        void draw(){
            cout<< "Polygon"<< endl;
        }
};

class Circle: public Point{
    public:
        void draw(){
            cout<< "Circle"<< endl;
        }
};

int main()
{
    Point pt;
    Line ln;
    Triangle tr;
    Polygon py;
    Circle cr;
    Point* baseptr[] = {&pt, &ln, &tr, &py, &cr};
    cout<< "Figure drawn by base pointer are: "<< endl;
    for(int i=0; i<5; i++)
        baseptr[i] -> draw();
    return 0;
}