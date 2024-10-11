#include<iostream>
using namespace std;

class student{
    private:
        char name[25];
        int score[5];
    public:
        void getdata();
        void showdata();
        void showtotal();
};

int main(){
    student s;
    s.getdata();
    s.showdata();
    s.showtotal();
    return 0;
}

void student::getdata(){
    cout<< "\nEnter Data for student: ";
    cout<< "\nName: ";
    cin>> name;
    for (int j=0; j<5; j++){
        cout<< "Marks in Subject"<< j+1<< ": ";
        cin>> score[j];
    }
}

void student::showdata(){
    cout<< "Name: "<< name<< endl;
    cout<< "Marks in 5 subjects"<< endl;
    for (int i=0; i<5; i++){
        cout<< score[i]<< "\t";
    }
}

void student::showtotal(){
    int tot=0;
    for (int j=0; j<5; j++){
        tot+=score[j];
    }
    cout<< "\nTotal Marks = "<< tot;
}