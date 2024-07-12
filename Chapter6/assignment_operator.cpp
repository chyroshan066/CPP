#include<iostream>
#include<cstring>
using namespace std;

class String{
    private:
        char *str;
    public:
        String(){
            str = new char('\0');
        }
        String(char *s){
            int len = strlen(s);
            str = new char[len+1];
            strcpy(str, s);
        }
        String(String &s){  //Copy constructor and assignment operator are almost the same, the slight difference is that the copy constructor initializes the initialized memory during object creation whereas the assignment operator assigns(copies) to the already created(well constructed) object
            int len = strlen(s.str);
            str = new char[len+1];
            strcpy(str, s.str);
        }
        void setValue(char *s){
            int len = strlen(s);
            delete[] str;
            str = new char[len+1];
            strcpy(str, s);
        }
        void display(){
            cout<< str<< endl;
        }
        String operator = (String s);  //C++ has default assignment operator(=) which assigns the value to the user-defined data type. But both the objects to which value has been assigned and whose value was assigned points to the same memory location and the changes made in one objects also cause the change in another object. To evade this outcome, we override the default behaviour of assignment operator by defining the assignment operator for the class
        ~String(){
            delete[] str;
        }
};

String String::operator = (String s){
    int len = strlen(s.str);
    delete[] str;
    str = new char[len+1];
    strcpy(str, s.str);
    return *this;
}

int main(){
    String s1("Wealth"), s2;

    s2 = s1;
    cout<< "After assigning s1 to s2 the output is "<< endl;
    cout<< "s1 = ";
    s1.display();
    cout<< "s2 = ";
    s2.display();

    s1.setValue("Health");
    cout<< endl<< "After changing s1 output is "<< endl;
    cout<< "s1 = ";
    s1.display();
    cout<< "s2 = ";
    s2.display();

    return 0;
}