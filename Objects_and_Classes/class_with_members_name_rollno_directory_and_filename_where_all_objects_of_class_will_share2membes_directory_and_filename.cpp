#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollno;
    static string directory;  
    static string filename;   

public:
    Student(int r) : rollno(r) {}
    void setName(const string n){
        name = n;
    }
    void display() const {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Directory: " << directory << endl;
        cout << "Filename: " << filename << endl;
        cout << "---------------------" << endl;
    }
    static void setDirectory(const string dir) {
        directory = dir;
    }

    static void setFilename(const string file) {
        filename = file;
    }
};

string Student::directory;
string Student::filename;


int main() {
    Student::setDirectory("C:/StudentData");
    Student::setFilename("student_info.txt");

    Student s1(1), s2(2);

    s1.setName("Alice");
    s2.setName("Bob");

    cout << "Student Details:" << endl;
    s1.display();
    s2.display();

    return 0;
}
