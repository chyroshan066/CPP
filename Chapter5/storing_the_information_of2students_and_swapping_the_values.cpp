#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name, address;

public:
    void setData()
    {
        // cin.ignore();
        cout << "Enter name of the student: ";
        getline(cin, name);
        // cin.ignore();
        cout << "Enter address: ";
        getline(cin, address);
    }
    void getData()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
    friend void swap(Student &, Student &);
};

void swap(Student &o1, Student &o2)
{
    string temp_name = o1.name;
    o1.name = o2.name;
    o2.name = temp_name;

    string temp_address = o1.address;
    o1.address = o2.address;
    o2.address = temp_address;
}

int main()
{
    Student s1, s2;
    s1.setData();
    s2.setData();

    cout << endl<< "Before swapping: " << endl;
    cout << "Information of first student: " << endl;
    s1.getData();
    cout << endl;
    cout << "Information of second student: " << endl;
    s2.getData();
    cout << endl<< endl;

    swap(s1, s2);

    cout << "After swapping: " << endl;
    cout << "Information of first student: " << endl;
    s1.getData();
    cout << endl;
    cout << "Information of second student: " << endl;
    s2.getData();
    cout << endl<< endl;

    return 0;
}