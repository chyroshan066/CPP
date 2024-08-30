#include<iostream>
#include<string>

using namespace std;

class Student{
    protected:
        int studID;
        string name;
    public:
        void getstData(){
            cout<< "Enter student ID: ";
            cin>> studID;
            cin.ignore();
            cout<< "Enter name: ";
            getline(cin, name);
        }
        void showstData(){
            cout<< endl<< "Student ID: "<< studID<< endl;
            cout<< "Name: "<< name<< endl;
        }
};

class InternalExam: virtual public Student{
    protected:
        int marks1, marks2, marks3;
    public:
        void getData(){
            cout<< "Enter internal marks in three subjects: ";
            cin>> marks1>> marks2>> marks3;
        }
        void showData(){
            cout<< "Internal marks in subject 1: "<< marks1<< endl;
            cout<< "Internal marks in subject 2: "<< marks2<< endl;
            cout<< "Internal marks in subject 3: "<< marks3<< endl;
        }
        int totInternalMarks(){
            return (marks1 + marks2 + marks3);
        }
};

class ExternalExam: virtual public Student{
    protected:
        int marks1, marks2, marks3;
    public:
        void getData(){
            cout<< "Enter external marks in three subjects: ";
            cin>> marks1>> marks2>> marks3;
        }
        void showData(){
            cout<< "External marks in subject 1: "<< marks1<< endl;
            cout<< "External marks in subject 2: "<< marks2<< endl;
            cout<< "External marks in subject 3: "<< marks3<< endl;
        }
        int totExternalMarks(){
            return (marks1 + marks2 + marks3);
        }
};

class Result: public InternalExam, public ExternalExam{
    public:
        void getData(){
            InternalExam::getData();
            ExternalExam::getData();
        }
        void showData(){
            InternalExam::showData();
            ExternalExam::showData();
        }
        int TotalMarks(){
            return (totInternalMarks() + totExternalMarks());
        }
};

int main()
{
    Result r;
    cout<< "Enter data for student: "<< endl;
    r.getstData();
    cout<< endl<< "Enter marks: "<< endl;
    r.getData();
    cout<< endl<< "Data for student is: "<< endl;
    r.showstData();
    r.showData();
    cout<< "Total Marks = "<< r.TotalMarks(); 
    return 0;
}