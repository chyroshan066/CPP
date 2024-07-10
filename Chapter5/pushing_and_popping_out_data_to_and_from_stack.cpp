#include<iostream>
#include<string>
using namespace std;

class Stack{
    private:
        string *arr;
        int size;
    public:
        Stack(){}
        Stack(int sz): size(sz){
            arr = new string[size];
        }
        Stack(string *a, int sz): size(sz){
            arr = new string[size];
            for(int i=0; i<size; i++)
                arr[i] = a[i];
        }
        void setData(){
            cout<< "Enter "<< size<< " elements: "<< endl;
            for(int i=0; i<size; i++)
                getline(cin, arr[i]);
        }
        void getData(){
            cout<< "There are "<< size<< " elements. They are: "<< endl;
            for(int i=0; i<size; i++)
                cout<< arr[i]<< "\t";
            cout<< endl;
        }
        string push(string passed){
            string *temp;
            temp = new string[size];
            for(int i=0; i<size; i++)
                temp[i] = arr[i];
            delete []arr;
            size++;
            arr = new string[size];
            for(int i=0; i<(size-1); i++)
                arr[i] = temp[i];
            arr[size-1] = passed;
            return passed;
        }
        string pop(){
            size--;
            string *temp, removed;
            temp = new string[size];
            removed = arr[size];
            for(int i=0; i<size; i++)
                temp[i] = arr[i];
            delete []arr;
            arr = new string[size];
            for(int i=0; i<size; i++)
                arr[i] = temp[i];
            return removed;
        }
};

int main(){
    string myarr[] = {"Roshan", "Rahul", "Sumit", "Prachit", "Shiv", "Rajesh"};
    Stack s1(3), s2(myarr, 6);
    s1.setData();
    s1.getData();
    s2.getData();
    cout<< "The data pushed is "<< s1.push("Prayush")<< ". "; 
    s1.getData();
    cout<< "The data popped is "<< s2.pop()<< ". ";
    s2.getData();
    return 0;
}