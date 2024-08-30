#include<iostream>
#include<string>

using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        void getData(){
            cout<< "Enter name: ";
            getline(cin, name);  //for using getline function "string" header file must be included
            cout<< "Enter age: ";
            cin>> age;
        }
        void showData(){
            cout<< endl<< "Name: "<< name<< endl;
            cout<< "Age: "<< age<< endl;
        }
};

class Exam{
    protected:
        int marks1, marks2, marks3;
    public:
        void getData(){
            cout<< "Enter marks in three subjects: ";
            cin>> marks1>> marks2>> marks3;
        }
        void showData(){
            cout<< "Marks in subject 1: "<< marks1<< endl;
            cout<< "Marks in subject 2: "<< marks2<< endl;
            cout<< "Marks in subject 3: "<< marks3<< endl;
        }
};

class Student: public Person{
    private:
        int studID;
        char stream[10];
    public:
        void getData(){
            Person::getData();
            cout<< "Enter student ID: ";
            cin>> studID;
            cout<< "Enter stream: ";
            cin.ignore(); //clearing buffer because taking other inputs like integer, float leaves buffer so it must be cleared before using getline function
            cin>> stream;
        }
        void showData(){
            Person::showData();
            cout<< "Student ID: "<< studID<< endl;
            cout<< "Stream: "<< stream<< endl;
        }
};

class Result: public Student, public Exam{
    private:
        int total;
    public:
        void getData(){
            Student::getData();
            Exam::getData();
        }
        void showData(){
            Student::showData();
            Exam::showData();
            total = marks1 + marks2 + marks3;
            cout<< "Total Marks = "<< total<< endl;
            cout<< "Percentage = "<< static_cast<float>(total) / 3<< endl;
        }
};

int main()
{
    Result r;
    cout<< "Enter data for result processing: "<< endl;
    r.getData();
    cout<< endl<< "Data on student: "<< endl;
    r.showData();
    return 0;
}