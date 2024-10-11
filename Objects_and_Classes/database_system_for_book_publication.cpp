#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
        string name, author, publishedDate;
        int ISBN;
    public:
        void setData(){
            cout<< "Enter the name of the book: ";
            // cin>> name;                                      //Doesn't accept spaces
            getline(cin, name);                                 //Accept spaces
            cout<< "Who is the author of "<< name<< ": ";
            // cin>> author;                                    //Doesn't accept spaces
            getline(cin, author);                               //Accept spaces
            cout<< "What is the ISBN for "<< name<< ": ";
            cin>> ISBN;
            cout<< "When was "<< name<< " published: ";
            cin>> publishedDate;
        }
        void getData(){
            cout<< "Name: "<< name<< endl;
            cout<< "Author: "<< author<< endl;
            cout<< "ISBN: "<< ISBN<< endl;
            cout<< "Date of publication: "<< publishedDate<< endl;
        }
};

int main(){
    Book b1;
    b1.setData();
    b1.getData();
    return 0;
}