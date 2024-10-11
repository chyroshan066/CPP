#include<iostream>
using namespace std;

const int MAX = 5;

class vector{
    protected:
        int arr[MAX];
        int size;
    public:
        vector(){
            size = 0;
        }
        int &getset(int index){
            return arr[index];
        }
        void addItem(int num){
            arr[size++] = num;
        }
        int removeItem(){
            return arr[--size];
        }
};

class vector2: public vector{
    public:
        void addItem(int num){
            if(size >= MAX)
                cout<< "Error: vector is full"<< endl;
            else
                vector:: addItem(num);
        }
        void removeItem(){
            if(size <= 0)
                cout<< "Error: vector is empty"<< endl;
            else
                vector:: removeItem();
        }
};

int main()
{
    vector v2;
    v2.addItem(1);
    v2.addItem(2);
    v2.addItem(3);
    v2.addItem(4);
    v2.getset(2) = 7;
    cout<< "Elements in the vector after adding: ";
    for(int i=0; i<4; i++)
        cout<< v2.getset(i)<< "  ";
    cout<< endl<< "display elements by removing: ";
    for(int i=0; i<4; i++)
        cout<< v2.removeItem()<< "  ";
    return 0;
}