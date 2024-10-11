#include<iostream>
using namespace std;

template <class T>
void display(T data){
    cout<< data<< endl;
}

template <class T>
void display(T data, int n){
    for(int i=0; i<n; i++)
        cout<< data<< endl;
}

int main()
{
    display(1);
    display(1.5);
    display(420, 2);
    display("Let's make our world a better place", 3);
    return 0;
}