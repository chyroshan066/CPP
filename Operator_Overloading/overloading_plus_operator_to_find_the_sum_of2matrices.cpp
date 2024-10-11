#include<iostream>
using namespace std;

class Matrix{
    private:
        int arr[3][3];
    public:
        void setData(){
            cout<< "Enter the elements of matrix:"<< endl;
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++){
                    if(i==0 && j==0){
                        cout<< i+j+1<< "st element: ";
                        cin>> arr[i][j];
                    }
                    if(i==0 && j==1){
                        cout<< i+j+1<< "nd element: ";
                        cin>> arr[i][j];
                    }
                    if(i==0 && j==2){
                        cout<< i+j+1<< "rd element: ";
                        cin>> arr[i][j];
                    }
                    if(i==1){
                        cout<< 3+j+1<< "th element: ";
                        cin>> arr[i][j];
                    }
                    if(i==2){
                        cout<< 6+j+1<< "th element: ";
                        cin>> arr[i][j];
                    }
                }
        }
        Matrix operator + (Matrix o1){
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                    arr[i][j] += o1.arr[i][j];
            return *this;
        }
        void display(){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout<< arr[i][j]<< "\t";
                }
                cout<< endl;
            }
        }
};

int main(){
    Matrix a, b, c;
    a.setData();
    b.setData();
    c = a+b;
    cout<< "After adding the resultant matrix is: "<< endl;
    c.display();
    return 0;
}