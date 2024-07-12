#include<iostream>
#include<cstdlib>

using namespace std;

class CPoint{
    private:
        int x, y;
    public:
        CPoint(){}
        CPoint(int a, int b): x(a), y(b){}
        void *operator new(size_t size);   //size_t is an unsigned integer type, used to store size of objects in memory. It holds the largest single integer value available
        void *operator new[](size_t size);
        void operator delete(void *ptr);
        void operator delete[](void *ptr);
        void display();
};

void CPoint::display(){
    cout<< "("<< x<< ","<< y<< ")"<< endl;
}

void *CPoint::operator new(size_t size){
    cout<< "Overloaded operator new called"<< endl;
    CPoint *ppoint = ::new CPoint;
    return ppoint;
}

void *CPoint::operator new[](size_t size){
    cout<< "Overloaded operator new[] called"<< endl;
    CPoint *ppoint = ::new CPoint[size / sizeof(CPoint)];
    return ppoint;
}

void CPoint::operator delete(void *ptr){
    cout<< "Overloaded operator delete called"<< endl;
    ::delete (CPoint*) ptr;
}

void CPoint::operator delete[](void *ptr){
    cout<< "Overloaded operator delete[] called"<< endl;
    ::delete[] (CPoint*) ptr;
}

int main(){
    CPoint *p1, *p2;
    p1 = new CPoint(2, 3);
    p2 = new CPoint[5];
    cout<< "Value of p1: ";
    p1->display();
    for(int i=0; i<5; i++)
        p2[i] = CPoint(i+1, i+i);
    for(int i=0; i<5; i++)
        p2[i].display();
    delete p1;
    delete[] p2;
    return 0;
}