#include<iostream>
#include<string>

using namespace std;

class String{
    private:
        string str;
    public:
        String(){}
        String(string s): str(s){}
        string operator + (String o1){
            string temp  = str;
            temp.append(o1.str);
            return temp;
        }
        string operator > (String o1){
            if(str.length() > o1.str.length())
                return str;
            else
                return o1.str;
        }
        void display(){
            cout<< str;
        }
};

int main(){
    String s1("Roshan "), s2("Chaudhary"), s3;
    s3 = s1+s2;
    s1.display();
    cout<< " + ";
    s2.display();
    cout<< " = ";
    s3.display();
    cout<< endl;
    cout<< (s1>s2)<< " is greater";  
    return 0;
}