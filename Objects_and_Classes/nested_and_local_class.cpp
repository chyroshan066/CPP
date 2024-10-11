#include<iostream>
using namespace std;

class Rectangle{
    public:
        class point{
            private:
                int x, y;
            public:
                point(){}
                point(int xcor, int ycor): x(xcor), y(ycor){}
                void showPoint(){
                    cout<< "("<< x<< ","<< y<< ")";
                }
        };
    private:
        point top, bottom;
    public:
        Rectangle(){}
        Rectangle(point t, point b): top(t), bottom(b){}
        Rectangle(int tx, int ty, int bx, int by){
            top = point(tx,ty);
            bottom = point(bx,by);
        }
        void showRect(){
            cout<< endl<< "Top left co-ordinate: ";
            top.showPoint();
            cout<< endl<< "Bottom right co-ordinate: ";
            bottom.showPoint();
        }
};

int main(){
    Rectangle rect1(Rectangle::point(2,3), Rectangle::point(30,20)), rect2(12, 13, 300, 200);
    rect1.showRect();
    rect2.showRect();
    return 0;
}