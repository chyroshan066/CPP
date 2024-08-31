#include<iostream>
using namespace std;

template <class T, int size>
class Array{
    private:
        T arr[size];
    public:
        void get_array();
        T find_max();
        T find_min();
};

template <class T, int size>
void Array<T, size>:: get_array(){
    for(int i=0; i<size; i++)
        cin>> arr[i];
}

template <class T, int size>
T Array<T, size>:: find_max(){
    T max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

template <class T, int size>
T Array<T, size>:: find_min(){
    T min = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    Array <int, 6> a1;
    cout<< "Enter integer numbers: ";
    a1.get_array();
    cout<< "Largest integer number: "<< a1.find_max()<< endl;
    cout<< "Smallest integer number: "<< a1.find_min()<< endl;

    Array <float, 5> a2;
    cout<< "Enter floating numbers: ";
    a2.get_array();
    cout<< "Largest floating number: "<< a2.find_max()<< endl;
    cout<< "Smallest floating number: "<< a2.find_min()<< endl;

    return 0;
}