#include<iostream>
using namespace std;

class beta;

class alpha{
    private:
        int a, b;
        friend void sum(alpha, beta);
    public:
        alpha(){}
        alpha(int a1, int b1): a(a1), b(b1){}
        void display(){
            cout<< "(a,b) = "<< "("<< a<< ","<< b<< ")"<< endl;
        }
};

class beta{
    private:
        int x, y;
        friend void sum(alpha, beta);
    public:
        beta(){}
        beta(int x1, int y1): x(x1), y(y1){}
        void display(){
            cout<< "(x,y) = "<< "("<< x<< ","<< y<< ")"<< endl;
        }
};

void sum(alpha o1, beta o2){
    int r = o1.a + o2.x;
    int l = o1.b + o2.y;
    cout<< "Sum = "<< "("<< r<< ","<< l<< ")"<< endl;
}

int main(){
    alpha o1;
    beta o2;
    int a, b;
    cout<< "Enter the numbers for class alpha: ";
    cin>> a>> b;
    o1 = alpha(a,b);
    cout<< "Enter the numbers for class beta: ";
    cin>> a>> b;
    o2 = beta(a,b);
    o1.display();
    o2.display();
    sum(o1, o2);
    return 0;
}