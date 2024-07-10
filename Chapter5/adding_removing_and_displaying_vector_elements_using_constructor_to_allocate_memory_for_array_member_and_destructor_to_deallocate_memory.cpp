#include<iostream>
using namespace std;

class Vector{
    private:
        int *arr, size;
    public:
        Vector(): size(0){}
        Vector(int sz): size(sz){
            arr = new int[size];
        }
        Vector(int *a, int sz): size(sz){
            arr = new int[size];
            for(int i=0; i<size; i++)
                arr[i] = a[i];
        }
        void addItem(int data){
            int *temp;
            temp = new int[size];
            for(int i=0; i<size; i++)
                temp[i] = arr[i];
            delete []arr;
            size++;
            arr = new int[size];
            for(int i=0; i<(size-1); i++)
                arr[i] = temp[i];
            arr[size-1] = data;
            delete []temp;
        }
        int removeItem(){
            int *temp, res;
            size--;
            temp = new int[size];
            for(int i=0; i<size; i++)
                temp[i] = arr[i];
            res = arr[size];
            delete []arr;
            arr = new int[size];
            for(int i=0; i<size; i++)
                arr[i] = temp[i];
            delete []temp;
            return res;
        }
        void readData(){
            cout<< "Enter data for "<< size<< " items"<< endl;
            for(int i=0; i<size; i++)
                cin>> arr[i];
        }
        void showData(){
            cout<< "There are "<< size<< " elements in vector"<< endl;
            cout<< "They are: "<< endl;
            for(int i=0; i<size; i++)
                cout<< arr[i]<< "\t";
            cout<< endl;
        }
};

int main(){
    int myarr[] = {2, 5, 7, 8, 9, 10};

    Vector v1(3);
    v1.readData();
    v1.showData();

    Vector v2(myarr, 6);
    v2.showData();

    v2.addItem(24);
    cout<< "After adding item: ";
    v2.showData();

    cout<< "The item removed is: "<< v1.removeItem()<< endl;
    cout<< "After removing item: ";
    v1.showData();

    return 0;
}