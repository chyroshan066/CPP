#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        int rollNo;
        float marks[3], total=0;
    public:
        Student(){}
        Student(string name, int roll, float marks[]): name(name), rollNo(roll){
            for(int i=0; i<3; i++){
                this->marks[i] = marks[i];
            }
        }
        float calcTotal(){
            for(int i=0; i<3; i++){
                total += marks[i];
            }
            return total;
        }
        void display(){
            cout<< "Name: "<< name<< endl;
            cout<< "Roll Number: "<< rollNo<< endl;
            cout<< "Marks in English: "<< marks[0]<< endl;
            cout<< "Marks in Math: "<< marks[1]<< endl;
            cout<< "Marks in Science: "<< marks[2]<< endl;
            cout<< "Total Marks: "<< total<< endl;
        }
};

void getData(string &name, int &roll, float marks[]){
    cout<< "Enter roll number: ";
    cin>> roll;
    cin.ignore();
    cout<< "Enter name: ";
    getline(cin, name);
    cout<< "Enter marks obtained in English: ";
    cin>> marks[0];
    cout<< "Enter marks obtained in Math: ";
    cin>> marks[1];
    cout<< "Enter marks obtained in Science: ";
    cin>> marks[2];
}

int main(){
    Student s1, s2;
    string name;
    int roll;
    float marks[3];
    cout<< "Enter details for student 1: "<< endl;
    getData(name, roll, marks);
    s1 = Student(name, roll, marks);
    cout<< endl<< endl;
    cout<< "Enter details for student 2: "<< endl;
    getData(name, roll, marks);
    s2 = Student(name, roll, marks);
    s1.calcTotal();
    s2.calcTotal();
    s1.display();
    cout<< endl;
    s2.display();
    return 0;
}