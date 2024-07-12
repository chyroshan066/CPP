#include<iostream>
#include<cstring>
using namespace std;

class String{
    private:
        char *str;
    public:
        String(){
            str = new char[1];
            str[0] = '\0';
        }
        String(char *s){
            int len = strlen(s);
            str = new char[len+1];
            strcpy(str, s);
        }
        String(const String &s){
            int len = strlen(s.str);
            str = new char[len+1];
            strcpy(str, s.str);
        }
        String operator + (const String &s);
        String& operator = (const String &s);
        void display(){
            cout<< "\"";
            cout<< str;
            cout<< "\"";
        }
        ~String(){
            delete[] str;
        }
};

String& String::operator = (const String &s){
    if(this == &s)
        return *this;
    int len = strlen(s.str);
    delete[] str;
    str = new char[len+1];
    strcpy(str, s.str);
    return *this;
}

String String::operator + (const String &s){
    String tmp;
    int len = strlen(str);
    len += strlen(s.str);
    tmp.str = new char[len+1];
    strcpy(tmp.str, str);
    strcat(tmp.str, s.str);
    return tmp;
}

int main(){
    String s1="Health is ", s2="Wealth", s3;
    s3 = s1 + s2;
    s1.display();
    cout<< " + ";
    s2.display();
    cout<< " = ";
    s3.display();
    cout<< endl;
    system("pause");
    return 0;
}