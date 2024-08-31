#include<iostream>
using namespace std;

class Parallelogram{
    protected:
        float length, breadth;
    public:
        Parallelogram(): length(0), breadth(0){}
        Parallelogram(float l, float b): length(l), breadth(b){}
        virtual float perimeter(){
            return (2*(length + breadth));
        }
        virtual float area() = 0;
};

class Rectangle: public Parallelogram{
    public:
        Rectangle(){}
        Rectangle(float l, float b): Parallelogram(l, b){}
        float area(){
            return (length * breadth);
        }
};

int main()
{
    Parallelogram *pgm;
    Rectangle rec(2.5, 7.9);
    pgm = &rec;
    cout<< "Perimeter = "<< pgm -> perimeter()<< endl;
    cout<< "Area = "<< pgm -> area()<< endl;
    return 0;
}