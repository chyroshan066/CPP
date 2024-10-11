#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length, breadth;
    public:
        Rectangle(){}
        Rectangle(int l, int b): length(l), breadth(b){}
        int area(){
            return (length*breadth);
        }
        int perimeter(){
            return (2*(length+breadth));
        }
};

int main(){
    Rectangle r1;
    int l, b;
    cout<< "Enter the length and breadth of the rectangle: ";
    cin>> l>> b;
    r1 = Rectangle(l,b);
    cout<< "The area of the rectangle is "<< r1.area()<< endl; 
    cout<< "The perimeter of the rectangle is "<< r1.perimeter()<< endl;
    return 0;
}