#include<iostream>
#include<cstdlib>

const int MAX = 5;

using namespace std;

class sArray{
    private:
        int arr[MAX];
    public:
        int & operator[] (int index){
            if(index<0 || index>=MAX){
                cout<< endl<< "Array index out of bound"<< endl;
                exit(1);
            }
            return arr[index];
        }
};

int main(){
    sArray sa;
    for(int i=0; i<MAX; i++)
        sa[i] = i+2;
    for(int i=0; i<MAX; i++)
        cout<< sa[i]<< "\t";
    sa[MAX] = 55;
    cout<< sa[MAX+1];
    return 0;
}